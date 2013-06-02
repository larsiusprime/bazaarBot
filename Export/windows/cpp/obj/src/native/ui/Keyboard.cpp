#include <hxcpp.h>

#ifndef INCLUDED_native_ui_Keyboard
#include <native/ui/Keyboard.h>
#endif
namespace native{
namespace ui{

Void Keyboard_obj::__construct()
{
	return null();
}

Keyboard_obj::~Keyboard_obj() { }

Dynamic Keyboard_obj::__CreateEmpty() { return  new Keyboard_obj; }
hx::ObjectPtr< Keyboard_obj > Keyboard_obj::__new()
{  hx::ObjectPtr< Keyboard_obj > result = new Keyboard_obj();
	result->__construct();
	return result;}

Dynamic Keyboard_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Keyboard_obj > result = new Keyboard_obj();
	result->__construct();
	return result;}

int Keyboard_obj::A;

int Keyboard_obj::B;

int Keyboard_obj::C;

int Keyboard_obj::D;

int Keyboard_obj::E;

int Keyboard_obj::F;

int Keyboard_obj::G;

int Keyboard_obj::H;

int Keyboard_obj::I;

int Keyboard_obj::J;

int Keyboard_obj::K;

int Keyboard_obj::L;

int Keyboard_obj::M;

int Keyboard_obj::N;

int Keyboard_obj::O;

int Keyboard_obj::P;

int Keyboard_obj::Q;

int Keyboard_obj::R;

int Keyboard_obj::S;

int Keyboard_obj::T;

int Keyboard_obj::U;

int Keyboard_obj::V;

int Keyboard_obj::W;

int Keyboard_obj::X;

int Keyboard_obj::Y;

int Keyboard_obj::Z;

int Keyboard_obj::ALTERNATE;

int Keyboard_obj::BACKQUOTE;

int Keyboard_obj::BACKSLASH;

int Keyboard_obj::BACKSPACE;

int Keyboard_obj::CAPS_LOCK;

int Keyboard_obj::COMMA;

int Keyboard_obj::COMMAND;

int Keyboard_obj::CONTROL;

int Keyboard_obj::DELETE;

int Keyboard_obj::DOWN;

int Keyboard_obj::END;

int Keyboard_obj::ENTER;

int Keyboard_obj::EQUAL;

int Keyboard_obj::ESCAPE;

int Keyboard_obj::F1;

int Keyboard_obj::F2;

int Keyboard_obj::F3;

int Keyboard_obj::F4;

int Keyboard_obj::F5;

int Keyboard_obj::F6;

int Keyboard_obj::F7;

int Keyboard_obj::F8;

int Keyboard_obj::F9;

int Keyboard_obj::F10;

int Keyboard_obj::F11;

int Keyboard_obj::F12;

int Keyboard_obj::F13;

int Keyboard_obj::F14;

int Keyboard_obj::F15;

int Keyboard_obj::HOME;

int Keyboard_obj::INSERT;

int Keyboard_obj::LEFT;

int Keyboard_obj::LEFTBRACKET;

int Keyboard_obj::MINUS;

int Keyboard_obj::NUMBER_0;

int Keyboard_obj::NUMBER_1;

int Keyboard_obj::NUMBER_2;

int Keyboard_obj::NUMBER_3;

int Keyboard_obj::NUMBER_4;

int Keyboard_obj::NUMBER_5;

int Keyboard_obj::NUMBER_6;

int Keyboard_obj::NUMBER_7;

int Keyboard_obj::NUMBER_8;

int Keyboard_obj::NUMBER_9;

int Keyboard_obj::NUMPAD;

int Keyboard_obj::NUMPAD_0;

int Keyboard_obj::NUMPAD_1;

int Keyboard_obj::NUMPAD_2;

int Keyboard_obj::NUMPAD_3;

int Keyboard_obj::NUMPAD_4;

int Keyboard_obj::NUMPAD_5;

int Keyboard_obj::NUMPAD_6;

int Keyboard_obj::NUMPAD_7;

int Keyboard_obj::NUMPAD_8;

int Keyboard_obj::NUMPAD_9;

int Keyboard_obj::NUMPAD_ADD;

int Keyboard_obj::NUMPAD_DECIMAL;

int Keyboard_obj::NUMPAD_DIVIDE;

int Keyboard_obj::NUMPAD_ENTER;

int Keyboard_obj::NUMPAD_MULTIPLY;

int Keyboard_obj::NUMPAD_SUBTRACT;

int Keyboard_obj::PAGE_DOWN;

int Keyboard_obj::PAGE_UP;

int Keyboard_obj::PERIOD;

int Keyboard_obj::QUOTE;

int Keyboard_obj::RIGHT;

int Keyboard_obj::RIGHTBRACKET;

int Keyboard_obj::SEMICOLON;

int Keyboard_obj::SHIFT;

int Keyboard_obj::SLASH;

int Keyboard_obj::SPACE;

int Keyboard_obj::TAB;

int Keyboard_obj::UP;


Keyboard_obj::Keyboard_obj()
{
}

void Keyboard_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Keyboard);
	HX_MARK_END_CLASS();
}

void Keyboard_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Keyboard_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"A") ) { return A; }
		if (HX_FIELD_EQ(inName,"B") ) { return B; }
		if (HX_FIELD_EQ(inName,"C") ) { return C; }
		if (HX_FIELD_EQ(inName,"D") ) { return D; }
		if (HX_FIELD_EQ(inName,"E") ) { return E; }
		if (HX_FIELD_EQ(inName,"F") ) { return F; }
		if (HX_FIELD_EQ(inName,"G") ) { return G; }
		if (HX_FIELD_EQ(inName,"H") ) { return H; }
		if (HX_FIELD_EQ(inName,"I") ) { return I; }
		if (HX_FIELD_EQ(inName,"J") ) { return J; }
		if (HX_FIELD_EQ(inName,"K") ) { return K; }
		if (HX_FIELD_EQ(inName,"L") ) { return L; }
		if (HX_FIELD_EQ(inName,"M") ) { return M; }
		if (HX_FIELD_EQ(inName,"N") ) { return N; }
		if (HX_FIELD_EQ(inName,"O") ) { return O; }
		if (HX_FIELD_EQ(inName,"P") ) { return P; }
		if (HX_FIELD_EQ(inName,"Q") ) { return Q; }
		if (HX_FIELD_EQ(inName,"R") ) { return R; }
		if (HX_FIELD_EQ(inName,"S") ) { return S; }
		if (HX_FIELD_EQ(inName,"T") ) { return T; }
		if (HX_FIELD_EQ(inName,"U") ) { return U; }
		if (HX_FIELD_EQ(inName,"V") ) { return V; }
		if (HX_FIELD_EQ(inName,"W") ) { return W; }
		if (HX_FIELD_EQ(inName,"X") ) { return X; }
		if (HX_FIELD_EQ(inName,"Y") ) { return Y; }
		if (HX_FIELD_EQ(inName,"Z") ) { return Z; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"F1") ) { return F1; }
		if (HX_FIELD_EQ(inName,"F2") ) { return F2; }
		if (HX_FIELD_EQ(inName,"F3") ) { return F3; }
		if (HX_FIELD_EQ(inName,"F4") ) { return F4; }
		if (HX_FIELD_EQ(inName,"F5") ) { return F5; }
		if (HX_FIELD_EQ(inName,"F6") ) { return F6; }
		if (HX_FIELD_EQ(inName,"F7") ) { return F7; }
		if (HX_FIELD_EQ(inName,"F8") ) { return F8; }
		if (HX_FIELD_EQ(inName,"F9") ) { return F9; }
		if (HX_FIELD_EQ(inName,"UP") ) { return UP; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"END") ) { return END; }
		if (HX_FIELD_EQ(inName,"F10") ) { return F10; }
		if (HX_FIELD_EQ(inName,"F11") ) { return F11; }
		if (HX_FIELD_EQ(inName,"F12") ) { return F12; }
		if (HX_FIELD_EQ(inName,"F13") ) { return F13; }
		if (HX_FIELD_EQ(inName,"F14") ) { return F14; }
		if (HX_FIELD_EQ(inName,"F15") ) { return F15; }
		if (HX_FIELD_EQ(inName,"TAB") ) { return TAB; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"DOWN") ) { return DOWN; }
		if (HX_FIELD_EQ(inName,"HOME") ) { return HOME; }
		if (HX_FIELD_EQ(inName,"LEFT") ) { return LEFT; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"COMMA") ) { return COMMA; }
		if (HX_FIELD_EQ(inName,"ENTER") ) { return ENTER; }
		if (HX_FIELD_EQ(inName,"EQUAL") ) { return EQUAL; }
		if (HX_FIELD_EQ(inName,"MINUS") ) { return MINUS; }
		if (HX_FIELD_EQ(inName,"QUOTE") ) { return QUOTE; }
		if (HX_FIELD_EQ(inName,"RIGHT") ) { return RIGHT; }
		if (HX_FIELD_EQ(inName,"SHIFT") ) { return SHIFT; }
		if (HX_FIELD_EQ(inName,"SLASH") ) { return SLASH; }
		if (HX_FIELD_EQ(inName,"SPACE") ) { return SPACE; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"DELETE") ) { return DELETE; }
		if (HX_FIELD_EQ(inName,"ESCAPE") ) { return ESCAPE; }
		if (HX_FIELD_EQ(inName,"INSERT") ) { return INSERT; }
		if (HX_FIELD_EQ(inName,"NUMPAD") ) { return NUMPAD; }
		if (HX_FIELD_EQ(inName,"PERIOD") ) { return PERIOD; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"COMMAND") ) { return COMMAND; }
		if (HX_FIELD_EQ(inName,"CONTROL") ) { return CONTROL; }
		if (HX_FIELD_EQ(inName,"PAGE_UP") ) { return PAGE_UP; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NUMBER_0") ) { return NUMBER_0; }
		if (HX_FIELD_EQ(inName,"NUMBER_1") ) { return NUMBER_1; }
		if (HX_FIELD_EQ(inName,"NUMBER_2") ) { return NUMBER_2; }
		if (HX_FIELD_EQ(inName,"NUMBER_3") ) { return NUMBER_3; }
		if (HX_FIELD_EQ(inName,"NUMBER_4") ) { return NUMBER_4; }
		if (HX_FIELD_EQ(inName,"NUMBER_5") ) { return NUMBER_5; }
		if (HX_FIELD_EQ(inName,"NUMBER_6") ) { return NUMBER_6; }
		if (HX_FIELD_EQ(inName,"NUMBER_7") ) { return NUMBER_7; }
		if (HX_FIELD_EQ(inName,"NUMBER_8") ) { return NUMBER_8; }
		if (HX_FIELD_EQ(inName,"NUMBER_9") ) { return NUMBER_9; }
		if (HX_FIELD_EQ(inName,"NUMPAD_0") ) { return NUMPAD_0; }
		if (HX_FIELD_EQ(inName,"NUMPAD_1") ) { return NUMPAD_1; }
		if (HX_FIELD_EQ(inName,"NUMPAD_2") ) { return NUMPAD_2; }
		if (HX_FIELD_EQ(inName,"NUMPAD_3") ) { return NUMPAD_3; }
		if (HX_FIELD_EQ(inName,"NUMPAD_4") ) { return NUMPAD_4; }
		if (HX_FIELD_EQ(inName,"NUMPAD_5") ) { return NUMPAD_5; }
		if (HX_FIELD_EQ(inName,"NUMPAD_6") ) { return NUMPAD_6; }
		if (HX_FIELD_EQ(inName,"NUMPAD_7") ) { return NUMPAD_7; }
		if (HX_FIELD_EQ(inName,"NUMPAD_8") ) { return NUMPAD_8; }
		if (HX_FIELD_EQ(inName,"NUMPAD_9") ) { return NUMPAD_9; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ALTERNATE") ) { return ALTERNATE; }
		if (HX_FIELD_EQ(inName,"BACKQUOTE") ) { return BACKQUOTE; }
		if (HX_FIELD_EQ(inName,"BACKSLASH") ) { return BACKSLASH; }
		if (HX_FIELD_EQ(inName,"BACKSPACE") ) { return BACKSPACE; }
		if (HX_FIELD_EQ(inName,"CAPS_LOCK") ) { return CAPS_LOCK; }
		if (HX_FIELD_EQ(inName,"PAGE_DOWN") ) { return PAGE_DOWN; }
		if (HX_FIELD_EQ(inName,"SEMICOLON") ) { return SEMICOLON; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"NUMPAD_ADD") ) { return NUMPAD_ADD; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"LEFTBRACKET") ) { return LEFTBRACKET; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"NUMPAD_ENTER") ) { return NUMPAD_ENTER; }
		if (HX_FIELD_EQ(inName,"RIGHTBRACKET") ) { return RIGHTBRACKET; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"NUMPAD_DIVIDE") ) { return NUMPAD_DIVIDE; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"NUMPAD_DECIMAL") ) { return NUMPAD_DECIMAL; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"NUMPAD_MULTIPLY") ) { return NUMPAD_MULTIPLY; }
		if (HX_FIELD_EQ(inName,"NUMPAD_SUBTRACT") ) { return NUMPAD_SUBTRACT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Keyboard_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"A") ) { A=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B") ) { B=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"C") ) { C=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"D") ) { D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"E") ) { E=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F") ) { F=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"G") ) { G=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"H") ) { H=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"I") ) { I=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"J") ) { J=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"K") ) { K=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"L") ) { L=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M") ) { M=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"N") ) { N=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"O") ) { O=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"P") ) { P=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Q") ) { Q=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"R") ) { R=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"S") ) { S=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"T") ) { T=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"U") ) { U=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"V") ) { V=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"W") ) { W=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"X") ) { X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Y") ) { Y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Z") ) { Z=inValue.Cast< int >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"F1") ) { F1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F2") ) { F2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F3") ) { F3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F4") ) { F4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F5") ) { F5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F6") ) { F6=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F7") ) { F7=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F8") ) { F8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F9") ) { F9=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UP") ) { UP=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"END") ) { END=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F10") ) { F10=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F11") ) { F11=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F12") ) { F12=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F13") ) { F13=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F14") ) { F14=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F15") ) { F15=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TAB") ) { TAB=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"DOWN") ) { DOWN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HOME") ) { HOME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LEFT") ) { LEFT=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"COMMA") ) { COMMA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ENTER") ) { ENTER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EQUAL") ) { EQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MINUS") ) { MINUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"QUOTE") ) { QUOTE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RIGHT") ) { RIGHT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHIFT") ) { SHIFT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SLASH") ) { SLASH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SPACE") ) { SPACE=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"DELETE") ) { DELETE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ESCAPE") ) { ESCAPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INSERT") ) { INSERT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD") ) { NUMPAD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PERIOD") ) { PERIOD=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"COMMAND") ) { COMMAND=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONTROL") ) { CONTROL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PAGE_UP") ) { PAGE_UP=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NUMBER_0") ) { NUMBER_0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMBER_1") ) { NUMBER_1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMBER_2") ) { NUMBER_2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMBER_3") ) { NUMBER_3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMBER_4") ) { NUMBER_4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMBER_5") ) { NUMBER_5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMBER_6") ) { NUMBER_6=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMBER_7") ) { NUMBER_7=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMBER_8") ) { NUMBER_8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMBER_9") ) { NUMBER_9=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD_0") ) { NUMPAD_0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD_1") ) { NUMPAD_1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD_2") ) { NUMPAD_2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD_3") ) { NUMPAD_3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD_4") ) { NUMPAD_4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD_5") ) { NUMPAD_5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD_6") ) { NUMPAD_6=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD_7") ) { NUMPAD_7=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD_8") ) { NUMPAD_8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD_9") ) { NUMPAD_9=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ALTERNATE") ) { ALTERNATE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BACKQUOTE") ) { BACKQUOTE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BACKSLASH") ) { BACKSLASH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BACKSPACE") ) { BACKSPACE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CAPS_LOCK") ) { CAPS_LOCK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PAGE_DOWN") ) { PAGE_DOWN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SEMICOLON") ) { SEMICOLON=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"NUMPAD_ADD") ) { NUMPAD_ADD=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"LEFTBRACKET") ) { LEFTBRACKET=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"NUMPAD_ENTER") ) { NUMPAD_ENTER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RIGHTBRACKET") ) { RIGHTBRACKET=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"NUMPAD_DIVIDE") ) { NUMPAD_DIVIDE=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"NUMPAD_DECIMAL") ) { NUMPAD_DECIMAL=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"NUMPAD_MULTIPLY") ) { NUMPAD_MULTIPLY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD_SUBTRACT") ) { NUMPAD_SUBTRACT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Keyboard_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("A"),
	HX_CSTRING("B"),
	HX_CSTRING("C"),
	HX_CSTRING("D"),
	HX_CSTRING("E"),
	HX_CSTRING("F"),
	HX_CSTRING("G"),
	HX_CSTRING("H"),
	HX_CSTRING("I"),
	HX_CSTRING("J"),
	HX_CSTRING("K"),
	HX_CSTRING("L"),
	HX_CSTRING("M"),
	HX_CSTRING("N"),
	HX_CSTRING("O"),
	HX_CSTRING("P"),
	HX_CSTRING("Q"),
	HX_CSTRING("R"),
	HX_CSTRING("S"),
	HX_CSTRING("T"),
	HX_CSTRING("U"),
	HX_CSTRING("V"),
	HX_CSTRING("W"),
	HX_CSTRING("X"),
	HX_CSTRING("Y"),
	HX_CSTRING("Z"),
	HX_CSTRING("ALTERNATE"),
	HX_CSTRING("BACKQUOTE"),
	HX_CSTRING("BACKSLASH"),
	HX_CSTRING("BACKSPACE"),
	HX_CSTRING("CAPS_LOCK"),
	HX_CSTRING("COMMA"),
	HX_CSTRING("COMMAND"),
	HX_CSTRING("CONTROL"),
	HX_CSTRING("DELETE"),
	HX_CSTRING("DOWN"),
	HX_CSTRING("END"),
	HX_CSTRING("ENTER"),
	HX_CSTRING("EQUAL"),
	HX_CSTRING("ESCAPE"),
	HX_CSTRING("F1"),
	HX_CSTRING("F2"),
	HX_CSTRING("F3"),
	HX_CSTRING("F4"),
	HX_CSTRING("F5"),
	HX_CSTRING("F6"),
	HX_CSTRING("F7"),
	HX_CSTRING("F8"),
	HX_CSTRING("F9"),
	HX_CSTRING("F10"),
	HX_CSTRING("F11"),
	HX_CSTRING("F12"),
	HX_CSTRING("F13"),
	HX_CSTRING("F14"),
	HX_CSTRING("F15"),
	HX_CSTRING("HOME"),
	HX_CSTRING("INSERT"),
	HX_CSTRING("LEFT"),
	HX_CSTRING("LEFTBRACKET"),
	HX_CSTRING("MINUS"),
	HX_CSTRING("NUMBER_0"),
	HX_CSTRING("NUMBER_1"),
	HX_CSTRING("NUMBER_2"),
	HX_CSTRING("NUMBER_3"),
	HX_CSTRING("NUMBER_4"),
	HX_CSTRING("NUMBER_5"),
	HX_CSTRING("NUMBER_6"),
	HX_CSTRING("NUMBER_7"),
	HX_CSTRING("NUMBER_8"),
	HX_CSTRING("NUMBER_9"),
	HX_CSTRING("NUMPAD"),
	HX_CSTRING("NUMPAD_0"),
	HX_CSTRING("NUMPAD_1"),
	HX_CSTRING("NUMPAD_2"),
	HX_CSTRING("NUMPAD_3"),
	HX_CSTRING("NUMPAD_4"),
	HX_CSTRING("NUMPAD_5"),
	HX_CSTRING("NUMPAD_6"),
	HX_CSTRING("NUMPAD_7"),
	HX_CSTRING("NUMPAD_8"),
	HX_CSTRING("NUMPAD_9"),
	HX_CSTRING("NUMPAD_ADD"),
	HX_CSTRING("NUMPAD_DECIMAL"),
	HX_CSTRING("NUMPAD_DIVIDE"),
	HX_CSTRING("NUMPAD_ENTER"),
	HX_CSTRING("NUMPAD_MULTIPLY"),
	HX_CSTRING("NUMPAD_SUBTRACT"),
	HX_CSTRING("PAGE_DOWN"),
	HX_CSTRING("PAGE_UP"),
	HX_CSTRING("PERIOD"),
	HX_CSTRING("QUOTE"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("RIGHTBRACKET"),
	HX_CSTRING("SEMICOLON"),
	HX_CSTRING("SHIFT"),
	HX_CSTRING("SLASH"),
	HX_CSTRING("SPACE"),
	HX_CSTRING("TAB"),
	HX_CSTRING("UP"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Keyboard_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Keyboard_obj::A,"A");
	HX_MARK_MEMBER_NAME(Keyboard_obj::B,"B");
	HX_MARK_MEMBER_NAME(Keyboard_obj::C,"C");
	HX_MARK_MEMBER_NAME(Keyboard_obj::D,"D");
	HX_MARK_MEMBER_NAME(Keyboard_obj::E,"E");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F,"F");
	HX_MARK_MEMBER_NAME(Keyboard_obj::G,"G");
	HX_MARK_MEMBER_NAME(Keyboard_obj::H,"H");
	HX_MARK_MEMBER_NAME(Keyboard_obj::I,"I");
	HX_MARK_MEMBER_NAME(Keyboard_obj::J,"J");
	HX_MARK_MEMBER_NAME(Keyboard_obj::K,"K");
	HX_MARK_MEMBER_NAME(Keyboard_obj::L,"L");
	HX_MARK_MEMBER_NAME(Keyboard_obj::M,"M");
	HX_MARK_MEMBER_NAME(Keyboard_obj::N,"N");
	HX_MARK_MEMBER_NAME(Keyboard_obj::O,"O");
	HX_MARK_MEMBER_NAME(Keyboard_obj::P,"P");
	HX_MARK_MEMBER_NAME(Keyboard_obj::Q,"Q");
	HX_MARK_MEMBER_NAME(Keyboard_obj::R,"R");
	HX_MARK_MEMBER_NAME(Keyboard_obj::S,"S");
	HX_MARK_MEMBER_NAME(Keyboard_obj::T,"T");
	HX_MARK_MEMBER_NAME(Keyboard_obj::U,"U");
	HX_MARK_MEMBER_NAME(Keyboard_obj::V,"V");
	HX_MARK_MEMBER_NAME(Keyboard_obj::W,"W");
	HX_MARK_MEMBER_NAME(Keyboard_obj::X,"X");
	HX_MARK_MEMBER_NAME(Keyboard_obj::Y,"Y");
	HX_MARK_MEMBER_NAME(Keyboard_obj::Z,"Z");
	HX_MARK_MEMBER_NAME(Keyboard_obj::ALTERNATE,"ALTERNATE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::BACKQUOTE,"BACKQUOTE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::BACKSLASH,"BACKSLASH");
	HX_MARK_MEMBER_NAME(Keyboard_obj::BACKSPACE,"BACKSPACE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::CAPS_LOCK,"CAPS_LOCK");
	HX_MARK_MEMBER_NAME(Keyboard_obj::COMMA,"COMMA");
	HX_MARK_MEMBER_NAME(Keyboard_obj::COMMAND,"COMMAND");
	HX_MARK_MEMBER_NAME(Keyboard_obj::CONTROL,"CONTROL");
	HX_MARK_MEMBER_NAME(Keyboard_obj::DELETE,"DELETE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(Keyboard_obj::END,"END");
	HX_MARK_MEMBER_NAME(Keyboard_obj::ENTER,"ENTER");
	HX_MARK_MEMBER_NAME(Keyboard_obj::EQUAL,"EQUAL");
	HX_MARK_MEMBER_NAME(Keyboard_obj::ESCAPE,"ESCAPE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F1,"F1");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F2,"F2");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F3,"F3");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F4,"F4");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F5,"F5");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F6,"F6");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F7,"F7");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F8,"F8");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F9,"F9");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F10,"F10");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F11,"F11");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F12,"F12");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F13,"F13");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F14,"F14");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F15,"F15");
	HX_MARK_MEMBER_NAME(Keyboard_obj::HOME,"HOME");
	HX_MARK_MEMBER_NAME(Keyboard_obj::INSERT,"INSERT");
	HX_MARK_MEMBER_NAME(Keyboard_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(Keyboard_obj::LEFTBRACKET,"LEFTBRACKET");
	HX_MARK_MEMBER_NAME(Keyboard_obj::MINUS,"MINUS");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_0,"NUMBER_0");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_1,"NUMBER_1");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_2,"NUMBER_2");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_3,"NUMBER_3");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_4,"NUMBER_4");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_5,"NUMBER_5");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_6,"NUMBER_6");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_7,"NUMBER_7");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_8,"NUMBER_8");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_9,"NUMBER_9");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD,"NUMPAD");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_0,"NUMPAD_0");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_1,"NUMPAD_1");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_2,"NUMPAD_2");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_3,"NUMPAD_3");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_4,"NUMPAD_4");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_5,"NUMPAD_5");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_6,"NUMPAD_6");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_7,"NUMPAD_7");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_8,"NUMPAD_8");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_9,"NUMPAD_9");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_ADD,"NUMPAD_ADD");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_DECIMAL,"NUMPAD_DECIMAL");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_DIVIDE,"NUMPAD_DIVIDE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_ENTER,"NUMPAD_ENTER");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_MULTIPLY,"NUMPAD_MULTIPLY");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_SUBTRACT,"NUMPAD_SUBTRACT");
	HX_MARK_MEMBER_NAME(Keyboard_obj::PAGE_DOWN,"PAGE_DOWN");
	HX_MARK_MEMBER_NAME(Keyboard_obj::PAGE_UP,"PAGE_UP");
	HX_MARK_MEMBER_NAME(Keyboard_obj::PERIOD,"PERIOD");
	HX_MARK_MEMBER_NAME(Keyboard_obj::QUOTE,"QUOTE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(Keyboard_obj::RIGHTBRACKET,"RIGHTBRACKET");
	HX_MARK_MEMBER_NAME(Keyboard_obj::SEMICOLON,"SEMICOLON");
	HX_MARK_MEMBER_NAME(Keyboard_obj::SHIFT,"SHIFT");
	HX_MARK_MEMBER_NAME(Keyboard_obj::SLASH,"SLASH");
	HX_MARK_MEMBER_NAME(Keyboard_obj::SPACE,"SPACE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::TAB,"TAB");
	HX_MARK_MEMBER_NAME(Keyboard_obj::UP,"UP");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Keyboard_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::A,"A");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::B,"B");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::C,"C");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::D,"D");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::E,"E");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F,"F");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::G,"G");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::H,"H");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::I,"I");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::J,"J");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::K,"K");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::L,"L");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::M,"M");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::N,"N");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::O,"O");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::P,"P");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::Q,"Q");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::R,"R");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::S,"S");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::T,"T");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::U,"U");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::V,"V");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::W,"W");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::X,"X");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::Z,"Z");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::ALTERNATE,"ALTERNATE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::BACKQUOTE,"BACKQUOTE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::BACKSLASH,"BACKSLASH");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::BACKSPACE,"BACKSPACE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::CAPS_LOCK,"CAPS_LOCK");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::COMMA,"COMMA");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::COMMAND,"COMMAND");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::CONTROL,"CONTROL");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::DELETE,"DELETE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::END,"END");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::ENTER,"ENTER");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::EQUAL,"EQUAL");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::ESCAPE,"ESCAPE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F1,"F1");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F2,"F2");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F3,"F3");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F4,"F4");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F5,"F5");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F6,"F6");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F7,"F7");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F8,"F8");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F9,"F9");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F10,"F10");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F11,"F11");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F12,"F12");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F13,"F13");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F14,"F14");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F15,"F15");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::HOME,"HOME");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::INSERT,"INSERT");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::LEFTBRACKET,"LEFTBRACKET");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::MINUS,"MINUS");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_0,"NUMBER_0");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_1,"NUMBER_1");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_2,"NUMBER_2");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_3,"NUMBER_3");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_4,"NUMBER_4");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_5,"NUMBER_5");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_6,"NUMBER_6");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_7,"NUMBER_7");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_8,"NUMBER_8");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_9,"NUMBER_9");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD,"NUMPAD");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_0,"NUMPAD_0");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_1,"NUMPAD_1");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_2,"NUMPAD_2");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_3,"NUMPAD_3");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_4,"NUMPAD_4");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_5,"NUMPAD_5");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_6,"NUMPAD_6");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_7,"NUMPAD_7");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_8,"NUMPAD_8");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_9,"NUMPAD_9");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_ADD,"NUMPAD_ADD");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_DECIMAL,"NUMPAD_DECIMAL");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_DIVIDE,"NUMPAD_DIVIDE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_ENTER,"NUMPAD_ENTER");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_MULTIPLY,"NUMPAD_MULTIPLY");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_SUBTRACT,"NUMPAD_SUBTRACT");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::PAGE_DOWN,"PAGE_DOWN");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::PAGE_UP,"PAGE_UP");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::PERIOD,"PERIOD");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::QUOTE,"QUOTE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::RIGHTBRACKET,"RIGHTBRACKET");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::SEMICOLON,"SEMICOLON");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::SHIFT,"SHIFT");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::SLASH,"SLASH");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::SPACE,"SPACE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::TAB,"TAB");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::UP,"UP");
};

Class Keyboard_obj::__mClass;

void Keyboard_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.ui.Keyboard"), hx::TCanCast< Keyboard_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Keyboard_obj::__boot()
{
	A= (int)65;
	B= (int)66;
	C= (int)67;
	D= (int)68;
	E= (int)69;
	F= (int)70;
	G= (int)71;
	H= (int)72;
	I= (int)73;
	J= (int)74;
	K= (int)75;
	L= (int)76;
	M= (int)77;
	N= (int)78;
	O= (int)79;
	P= (int)80;
	Q= (int)81;
	R= (int)82;
	S= (int)83;
	T= (int)84;
	U= (int)85;
	V= (int)86;
	W= (int)87;
	X= (int)88;
	Y= (int)89;
	Z= (int)90;
	ALTERNATE= (int)18;
	BACKQUOTE= (int)192;
	BACKSLASH= (int)220;
	BACKSPACE= (int)8;
	CAPS_LOCK= (int)20;
	COMMA= (int)188;
	COMMAND= (int)15;
	CONTROL= (int)17;
	DELETE= (int)46;
	DOWN= (int)40;
	END= (int)35;
	ENTER= (int)13;
	EQUAL= (int)187;
	ESCAPE= (int)27;
	F1= (int)112;
	F2= (int)113;
	F3= (int)114;
	F4= (int)115;
	F5= (int)116;
	F6= (int)117;
	F7= (int)118;
	F8= (int)119;
	F9= (int)120;
	F10= (int)121;
	F11= (int)122;
	F12= (int)123;
	F13= (int)124;
	F14= (int)125;
	F15= (int)126;
	HOME= (int)36;
	INSERT= (int)45;
	LEFT= (int)37;
	LEFTBRACKET= (int)219;
	MINUS= (int)189;
	NUMBER_0= (int)48;
	NUMBER_1= (int)49;
	NUMBER_2= (int)50;
	NUMBER_3= (int)51;
	NUMBER_4= (int)52;
	NUMBER_5= (int)53;
	NUMBER_6= (int)54;
	NUMBER_7= (int)55;
	NUMBER_8= (int)56;
	NUMBER_9= (int)57;
	NUMPAD= (int)21;
	NUMPAD_0= (int)96;
	NUMPAD_1= (int)97;
	NUMPAD_2= (int)98;
	NUMPAD_3= (int)99;
	NUMPAD_4= (int)100;
	NUMPAD_5= (int)101;
	NUMPAD_6= (int)102;
	NUMPAD_7= (int)103;
	NUMPAD_8= (int)104;
	NUMPAD_9= (int)105;
	NUMPAD_ADD= (int)107;
	NUMPAD_DECIMAL= (int)110;
	NUMPAD_DIVIDE= (int)111;
	NUMPAD_ENTER= (int)108;
	NUMPAD_MULTIPLY= (int)106;
	NUMPAD_SUBTRACT= (int)109;
	PAGE_DOWN= (int)34;
	PAGE_UP= (int)33;
	PERIOD= (int)190;
	QUOTE= (int)222;
	RIGHT= (int)39;
	RIGHTBRACKET= (int)221;
	SEMICOLON= (int)186;
	SHIFT= (int)16;
	SLASH= (int)191;
	SPACE= (int)32;
	TAB= (int)9;
	UP= (int)38;
}

} // end namespace native
} // end namespace ui
