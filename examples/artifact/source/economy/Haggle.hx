package economy;
import bazaarbot.Offer;

/**
 * ...
 * @author 
 */
@:allow(economy.Haggle)
class Haggle
{
	private var askDownLinear:Float = 0.02;
	private var askDownMultiplier:Float = 0.90;
	private var askPatience:Int = 10;
	
	private var bidUpLinear:Float = 0.02;
	private var bidUpMultiplier:Float = 1.10;
	private var bidPatience:Int = 10;
	
	public function new() {}
	
	public static function pennyPincher():Haggle
	{
		var haggle = new Haggle();
		haggle.askDownLinear = 0.01;
		haggle.askDownMultiplier = 1.0;
		haggle.bidUpLinear = 0.01;
		haggle.bidUpMultiplier = 1.0;
		haggle.askPatience = 10;
		haggle.bidPatience = 10;
		return haggle;
	}
	
	public static function fastDealer():Haggle
	{
		var haggle = new Haggle();
		haggle.askDownLinear = 0.00;
		haggle.askDownMultiplier = 0.5;
		haggle.bidUpLinear = 0.00;
		haggle.bidUpMultiplier = 1.5;
		haggle.askPatience = 10;
		haggle.bidPatience = 10;
		return haggle;
	}
	
	public static function averageJoe():Haggle
	{
		return new Haggle();
	}
	
	public function askDown(offer:Offer, minimum:Float):Offer
	{
		var oldAmount = offer.units * offer.unit_price;
		var newAmount = (oldAmount - askDownLinear) * askDownMultiplier;
		
		if (newAmount < minimum)
		{
			newAmount = minimum;
		}
		
		if (newAmount < oldAmount)
		{
			offer.unit_price = newAmount / offer.units;
			offer.age = 0;
			return offer;
		}
		else
		{
			if (newAmount == oldAmount)
			{
				offer.age++;
				if (offer.age > askPatience)
				{
					return null;
				}
				return offer;
			}
		}
		
		return null;
	}
	
	public function bidUp(offer:Offer, maximum:Float):Offer
	{
		var oldAmount = offer.units * offer.unit_price;
		var newAmount = (oldAmount + bidUpLinear) * bidUpMultiplier;
		
		if (newAmount > maximum)
		{
			newAmount = maximum;
		}
		
		if (newAmount > oldAmount)
		{
			offer.unit_price = newAmount / offer.units;
			offer.age = 0;
			return offer;
		}
		else
		{
			if (newAmount == oldAmount)
			{
				offer.age++;
				if (offer.age > bidPatience)
				{
					return null;
				}
				return offer;
			}
		}
		
		return null;
	}
}