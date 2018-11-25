package bazaarbot.utils;
import bazaarbot.utils.DestroyUtil;
import bazaarbot.utils.DestroyUtil.IDestroyable;

/**
 * (Copied from HaxeFlixel)
 */

#if macro
import haxe.macro.Expr;
#else

typedef Signal = TypedSignal<Void->Void>;

@:multiType
abstract TypedSignal<T>(ISignal<T>)
{
	public var dispatch(get, never):T;

	public function new();

	public inline function add(listener:T):Void
	{
		this.add(listener);
	}

	public inline function addOnce(listener:T):Void
	{
		this.addOnce(listener);
	}

	public inline function remove(listener:T):Void
	{
		this.remove(listener);
	}

	public inline function has(listener:T):Bool
	{
		return this.has(listener);
	}

	public inline function removeAll():Void
	{
		this.removeAll();
	}

	private inline function get_dispatch():T
	{
		return this.dispatch;
	}

	@:to
	private static inline function toSignal0(signal:ISignal<Void->Void>):Signal0
	{
		return new Signal0();
	}

	@:to
	private static inline function toSignal1<T1>(signal:ISignal<T1->Void>):Signal1<T1>
	{
		return new Signal1();
	}

	@:to
	private static inline function toSignal2<T1, T2>(signal:ISignal<T1->T2->Void>):Signal2<T1,T2>
	{
		return new Signal2();
	}

	@:to
	private static inline function toSignal3<T1, T2, T3>(signal:ISignal<T1->T2->T3->Void>):Signal3<T1,T2,T3>
	{
		return new Signal3();
	}

	@:to
	private static inline function toSignal4<T1, T2, T3, T4>(signal:ISignal<T1->T2->T3->T4->Void>):Signal4<T1,T2,T3,T4>
	{
		return new Signal4();
	}
}

private class SignalHandler<T> implements IDestroyable
{
	public var listener:T;
	public var dispatchOnce(default, null):Bool = false;

	public function new(listener:T, dispatchOnce:Bool)
	{
		this.listener = listener;
		this.dispatchOnce = dispatchOnce;
	}

	public function destroy()
	{
		listener = null;
	}
}

private class BaseSignal<T> implements ISignal<T>
{
	/**
	 * Typed function reference used to dispatch this signal.
	 */
	public var dispatch:T;

	private var handlers:Array<SignalHandler<T>>;
	private var pendingRemove:Array<SignalHandler<T>>;
	private var processingListeners:Bool = false;


	public function new()
	{
		handlers = [];
		pendingRemove = [];
	}

	public function add(listener:T)
	{
		if (listener != null)
			registerListener(listener, false);
	}

	public function addOnce(listener:T):Void
	{
		if (listener != null)
			registerListener(listener, true);
	}

	public function remove(listener:T):Void
	{
		if (listener != null)
		{
			var handler = getHandler(listener);
			if (handler != null)
			{
				if (processingListeners)
					pendingRemove.push(handler);
				else
				{
					handlers.remove(handler);
					handler.destroy();
				}
			}
		}

	}

	public function has(listener:T):Bool
	{
		if (listener == null)
			return false;
		return getHandler(listener) != null;
	}

	public inline function removeAll():Void
	{
		DestroyUtil.destroyArray(handlers);
	}

	public function destroy():Void
	{
		removeAll();
		handlers = null;
		pendingRemove = null;
	}

	private function registerListener(listener:T, dispatchOnce:Bool):SignalHandler<T>
	{
		var handler = getHandler(listener);

		if (handler == null)
		{
			handler = new SignalHandler<T>(listener, dispatchOnce);
			handlers.push(handler);
			return handler;
		}
		else
		{
			// If the listener was previously added, definitely don't add it again.
			// But throw an exception if their once values differ.
			if (handler.dispatchOnce != dispatchOnce)
				throw "You cannot addOnce() then add() the same listener without removing the relationship first.";
			else
				return handler;
		}
	}

	private function getHandler(listener:T):SignalHandler<T>
	{
		for (handler in handlers)
		{
			if (
				#if neko // simply comparing the functions doesn't do the trick on neko
					Reflect.compareMethods(handler.listener, listener)
				#else
					handler.listener == listener
				#end )
			{
				return handler; // Listener was already registered.
			}
		}
		return null; // Listener not yet registered.
	}
}

private class Signal0 extends BaseSignal<Void->Void>
{
	public function new()
	{
		super();
		this.dispatch = dispatch0;
	}

	public function dispatch0():Void
	{
		Macro.buildDispatch();
	}
}

private class Signal1<T1> extends BaseSignal<T1->Void>
{
	public function new()
	{
		super();
		this.dispatch = dispatch1;
	}

	public function dispatch1(value1:T1):Void
	{
		Macro.buildDispatch(value1);
	}
}

private class Signal2<T1,T2> extends BaseSignal<T1->T2->Void>
{
	public function new()
	{
		super();
		this.dispatch = dispatch2;
	}

	public function dispatch2(value1:T1, value2:T2):Void
	{
		Macro.buildDispatch(value1, value2);
	}
}

private class Signal3<T1,T2,T3> extends BaseSignal<T1->T2->T3->Void>
{
	public function new()
	{
		super();
		this.dispatch = dispatch3;
	}

	public function dispatch3(value1:T1, value2:T2, value3:T3):Void
	{
		Macro.buildDispatch(value1, value2, value3);
	}
}

private class Signal4<T1,T2,T3,T4> extends BaseSignal<T1->T2->T3->T4->Void>
{
	public function new()
	{
		super();
		this.dispatch = dispatch4;
	}

	public function dispatch4(value1:T1, value2:T2, value3:T3, value4:T4):Void
	{
		Macro.buildDispatch(value1, value2, value3, value4);
	}
}

interface ISignal<T> extends IDestroyable
{
	public var dispatch:T;
	public function add(listener:T):Void;
	public function addOnce(listener:T):Void;
	public function remove(listener:T):Void;
	public function removeAll():Void;
	public function has(listener:T):Bool;
}

#end

private class Macro
{
	macro public static function buildDispatch(exprs:Array<Expr>):Expr
	{
		return macro
		{
			processingListeners = true;
			for (handler in handlers)
			{
				handler.listener($a{exprs});

				if (handler.dispatchOnce)
					remove(handler.listener);
			}

			processingListeners = false;

			for (handler in pendingRemove)
			{
				remove(handler.listener);
			}
			if (pendingRemove.length > 0)
				pendingRemove = [];
		}
	}
}
