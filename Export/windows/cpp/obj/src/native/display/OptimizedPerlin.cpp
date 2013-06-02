#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_native_display_BitmapData
#include <native/display/BitmapData.h>
#endif
#ifndef INCLUDED_native_display_IBitmapDrawable
#include <native/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_native_display_OptimizedPerlin
#include <native/display/OptimizedPerlin.h>
#endif
namespace native{
namespace display{

Void OptimizedPerlin_obj::__construct(hx::Null< int >  __o_seed,hx::Null< int >  __o_octaves,hx::Null< Float >  __o_falloff)
{
HX_STACK_PUSH("OptimizedPerlin::new","native/display/BitmapData.hx",725);
int seed = __o_seed.Default(123);
int octaves = __o_octaves.Default(4);
Float falloff = __o_falloff.Default(0.5);
{
	HX_STACK_LINE(726)
	this->baseFactor = 0.015625;
	HX_STACK_LINE(727)
	this->seedOffset(seed);
	HX_STACK_LINE(728)
	this->octFreqPers(falloff);
}
;
	return null();
}

OptimizedPerlin_obj::~OptimizedPerlin_obj() { }

Dynamic OptimizedPerlin_obj::__CreateEmpty() { return  new OptimizedPerlin_obj; }
hx::ObjectPtr< OptimizedPerlin_obj > OptimizedPerlin_obj::__new(hx::Null< int >  __o_seed,hx::Null< int >  __o_octaves,hx::Null< Float >  __o_falloff)
{  hx::ObjectPtr< OptimizedPerlin_obj > result = new OptimizedPerlin_obj();
	result->__construct(__o_seed,__o_octaves,__o_falloff);
	return result;}

Dynamic OptimizedPerlin_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OptimizedPerlin_obj > result = new OptimizedPerlin_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void OptimizedPerlin_obj::seedOffset( int iSeed){
{
		HX_STACK_PUSH("OptimizedPerlin::seedOffset","native/display/BitmapData.hx",864);
		HX_STACK_THIS(this);
		HX_STACK_ARG(iSeed,"iSeed");
		HX_STACK_LINE(870)
		this->iXoffset = iSeed = ::Std_obj::_int(hx::Mod((iSeed * 16807.),(int)2147483647));
		HX_STACK_LINE(871)
		this->iYoffset = iSeed = ::Std_obj::_int(hx::Mod((iSeed * 16807.),(int)2147483647));
		HX_STACK_LINE(872)
		this->iZoffset = iSeed = ::Std_obj::_int(hx::Mod((iSeed * 16807.),(int)2147483647));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OptimizedPerlin_obj,seedOffset,(void))

Void OptimizedPerlin_obj::octFreqPers( Float fPersistence){
{
		HX_STACK_PUSH("OptimizedPerlin::octFreqPers","native/display/BitmapData.hx",844);
		HX_STACK_THIS(this);
		HX_STACK_ARG(fPersistence,"fPersistence");
		HX_STACK_LINE(845)
		Float fFreq;		HX_STACK_VAR(fFreq,"fFreq");
		Float fPers;		HX_STACK_VAR(fPers,"fPers");
		HX_STACK_LINE(847)
		this->aOctFreq = Array_obj< Float >::__new();
		HX_STACK_LINE(848)
		this->aOctPers = Array_obj< Float >::__new();
		HX_STACK_LINE(849)
		this->fPersMax = (int)0;
		HX_STACK_LINE(851)
		{
			HX_STACK_LINE(851)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->octaves;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(851)
			while(((_g1 < _g))){
				HX_STACK_LINE(851)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(853)
				fFreq = ::Math_obj::pow((int)2,i);
				HX_STACK_LINE(854)
				fPers = ::Math_obj::pow(fPersistence,i);
				HX_STACK_LINE(855)
				hx::AddEq(this->fPersMax,fPers);
				HX_STACK_LINE(856)
				this->aOctFreq->push(fFreq);
				HX_STACK_LINE(857)
				this->aOctPers->push(fPers);
			}
		}
		HX_STACK_LINE(860)
		this->fPersMax = (Float((int)1) / Float(this->fPersMax));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OptimizedPerlin_obj,octFreqPers,(void))

Void OptimizedPerlin_obj::fill( ::native::display::BitmapData bitmap,Float _x,Float _y,Float _z,Dynamic _){
{
		HX_STACK_PUSH("OptimizedPerlin::fill","native/display/BitmapData.hx",732);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bitmap,"bitmap");
		HX_STACK_ARG(_x,"_x");
		HX_STACK_ARG(_y,"_y");
		HX_STACK_ARG(_z,"_z");
		HX_STACK_ARG(_,"_");
		HX_STACK_LINE(733)
		Float baseX;		HX_STACK_VAR(baseX,"baseX");
		HX_STACK_LINE(735)
		baseX = ((_x * this->baseFactor) + this->iXoffset);
		HX_STACK_LINE(736)
		_y = ((_y * this->baseFactor) + this->iYoffset);
		HX_STACK_LINE(737)
		_z = ((_z * this->baseFactor) + this->iZoffset);
		HX_STACK_LINE(739)
		int width = bitmap->get_width();		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(740)
		int height = bitmap->get_height();		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(742)
		Array< int > p = ::native::display::OptimizedPerlin_obj::P;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(743)
		int octaves = this->octaves;		HX_STACK_VAR(octaves,"octaves");
		HX_STACK_LINE(744)
		Array< Float > aOctFreq = this->aOctFreq;		HX_STACK_VAR(aOctFreq,"aOctFreq");
		HX_STACK_LINE(745)
		Array< Float > aOctPers = this->aOctPers;		HX_STACK_VAR(aOctPers,"aOctPers");
		HX_STACK_LINE(747)
		{
			HX_STACK_LINE(747)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(747)
			while(((_g < height))){
				HX_STACK_LINE(747)
				int py = (_g)++;		HX_STACK_VAR(py,"py");
				HX_STACK_LINE(749)
				_x = baseX;
				HX_STACK_LINE(751)
				{
					HX_STACK_LINE(751)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(751)
					while(((_g1 < width))){
						HX_STACK_LINE(751)
						int px = (_g1)++;		HX_STACK_VAR(px,"px");
						HX_STACK_LINE(753)
						Float s = 0.;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(755)
						{
							HX_STACK_LINE(755)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(755)
							while(((_g2 < octaves))){
								HX_STACK_LINE(755)
								int i = (_g2)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(757)
								Float fFreq = aOctFreq->__get(i);		HX_STACK_VAR(fFreq,"fFreq");
								HX_STACK_LINE(758)
								Float fPers = aOctPers->__get(i);		HX_STACK_VAR(fPers,"fPers");
								HX_STACK_LINE(760)
								Float x = (_x * fFreq);		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(761)
								Float y = (_y * fFreq);		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(762)
								Float z = (_z * fFreq);		HX_STACK_VAR(z,"z");
								HX_STACK_LINE(764)
								Float xf = (x - hx::Mod(x,(int)1));		HX_STACK_VAR(xf,"xf");
								HX_STACK_LINE(765)
								Float yf = (y - hx::Mod(y,(int)1));		HX_STACK_VAR(yf,"yf");
								HX_STACK_LINE(766)
								Float zf = (z - hx::Mod(z,(int)1));		HX_STACK_VAR(zf,"zf");
								HX_STACK_LINE(768)
								int X = (int(::Std_obj::_int(xf)) & int((int)255));		HX_STACK_VAR(X,"X");
								HX_STACK_LINE(769)
								int Y = (int(::Std_obj::_int(yf)) & int((int)255));		HX_STACK_VAR(Y,"Y");
								HX_STACK_LINE(770)
								int Z = (int(::Std_obj::_int(zf)) & int((int)255));		HX_STACK_VAR(Z,"Z");
								HX_STACK_LINE(772)
								hx::SubEq(x,xf);
								HX_STACK_LINE(773)
								hx::SubEq(y,yf);
								HX_STACK_LINE(774)
								hx::SubEq(z,zf);
								HX_STACK_LINE(776)
								Float u = (((x * x) * x) * (((x * (((x * (int)6) - (int)15))) + (int)10)));		HX_STACK_VAR(u,"u");
								HX_STACK_LINE(777)
								Float v = (((y * y) * y) * (((y * (((y * (int)6) - (int)15))) + (int)10)));		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(778)
								Float w = (((z * z) * z) * (((z * (((z * (int)6) - (int)15))) + (int)10)));		HX_STACK_VAR(w,"w");
								HX_STACK_LINE(780)
								int A = (p->__get(X) + Y);		HX_STACK_VAR(A,"A");
								HX_STACK_LINE(781)
								int AA = (p->__get(A) + Z);		HX_STACK_VAR(AA,"AA");
								HX_STACK_LINE(782)
								int AB = (p->__get((A + (int)1)) + Z);		HX_STACK_VAR(AB,"AB");
								HX_STACK_LINE(783)
								int B = (p->__get((X + (int)1)) + Y);		HX_STACK_VAR(B,"B");
								HX_STACK_LINE(784)
								int BA = (p->__get(B) + Z);		HX_STACK_VAR(BA,"BA");
								HX_STACK_LINE(785)
								int BB = (p->__get((B + (int)1)) + Z);		HX_STACK_VAR(BB,"BB");
								HX_STACK_LINE(787)
								Float x1 = (x - (int)1);		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(788)
								Float y1 = (y - (int)1);		HX_STACK_VAR(y1,"y1");
								HX_STACK_LINE(789)
								Float z1 = (z - (int)1);		HX_STACK_VAR(z1,"z1");
								HX_STACK_LINE(791)
								int hash = (int(p->__get((BB + (int)1))) & int((int)15));		HX_STACK_VAR(hash,"hash");
								struct _Function_7_1{
									inline static Float Block( Float &y1,Float &x1,int &hash){
										HX_STACK_PUSH("*::closure","native/display/BitmapData.hx",792);
										{
											HX_STACK_LINE(792)
											return (  (((hash < (int)8))) ? Float(x1) : Float(y1) );
										}
										return null();
									}
								};
								struct _Function_7_2{
									inline static Float Block( Float &y1,Float &x1,int &hash,Float &z1){
										HX_STACK_PUSH("*::closure","native/display/BitmapData.hx",792);
										{
											HX_STACK_LINE(792)
											return (  (((hash < (int)4))) ? Float(y1) : Float((  (((hash == (int)12))) ? Float(x1) : Float(z1) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(792)
								Float g1 = (((  (((((int(hash) & int((int)1))) == (int)0))) ? Float(_Function_7_1::Block(y1,x1,hash)) : Float((  (((hash < (int)8))) ? Float(-(x1)) : Float(-(y1)) )) )) + ((  (((((int(hash) & int((int)2))) == (int)0))) ? Float(_Function_7_2::Block(y1,x1,hash,z1)) : Float((  (((hash < (int)4))) ? Float(-(y1)) : Float((  (((hash == (int)14))) ? Float(-(x1)) : Float(-(z1)) )) )) )));		HX_STACK_VAR(g1,"g1");
								HX_STACK_LINE(794)
								hash = (int(p->__get((AB + (int)1))) & int((int)15));
								struct _Function_7_3{
									inline static Float Block( Float &y1,int &hash,Float &x){
										HX_STACK_PUSH("*::closure","native/display/BitmapData.hx",795);
										{
											HX_STACK_LINE(795)
											return (  (((hash < (int)8))) ? Float(x) : Float(y1) );
										}
										return null();
									}
								};
								struct _Function_7_4{
									inline static Float Block( Float &y1,int &hash,Float &x,Float &z1){
										HX_STACK_PUSH("*::closure","native/display/BitmapData.hx",795);
										{
											HX_STACK_LINE(795)
											return (  (((hash < (int)4))) ? Float(y1) : Float((  (((hash == (int)12))) ? Float(x) : Float(z1) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(795)
								Float g2 = (((  (((((int(hash) & int((int)1))) == (int)0))) ? Float(_Function_7_3::Block(y1,hash,x)) : Float((  (((hash < (int)8))) ? Float(-(x)) : Float(-(y1)) )) )) + ((  (((((int(hash) & int((int)2))) == (int)0))) ? Float(_Function_7_4::Block(y1,hash,x,z1)) : Float((  (((hash < (int)4))) ? Float(-(y1)) : Float((  (((hash == (int)14))) ? Float(-(x)) : Float(-(z1)) )) )) )));		HX_STACK_VAR(g2,"g2");
								HX_STACK_LINE(797)
								hash = (int(p->__get((BA + (int)1))) & int((int)15));
								struct _Function_7_5{
									inline static Float Block( Float &x1,Float &y,int &hash){
										HX_STACK_PUSH("*::closure","native/display/BitmapData.hx",798);
										{
											HX_STACK_LINE(798)
											return (  (((hash < (int)8))) ? Float(x1) : Float(y) );
										}
										return null();
									}
								};
								struct _Function_7_6{
									inline static Float Block( Float &y,Float &x1,int &hash,Float &z1){
										HX_STACK_PUSH("*::closure","native/display/BitmapData.hx",798);
										{
											HX_STACK_LINE(798)
											return (  (((hash < (int)4))) ? Float(y) : Float((  (((hash == (int)12))) ? Float(x1) : Float(z1) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(798)
								Float g3 = (((  (((((int(hash) & int((int)1))) == (int)0))) ? Float(_Function_7_5::Block(x1,y,hash)) : Float((  (((hash < (int)8))) ? Float(-(x1)) : Float(-(y)) )) )) + ((  (((((int(hash) & int((int)2))) == (int)0))) ? Float(_Function_7_6::Block(y,x1,hash,z1)) : Float((  (((hash < (int)4))) ? Float(-(y)) : Float((  (((hash == (int)14))) ? Float(-(x1)) : Float(-(z1)) )) )) )));		HX_STACK_VAR(g3,"g3");
								HX_STACK_LINE(800)
								hash = (int(p->__get((AA + (int)1))) & int((int)15));
								struct _Function_7_7{
									inline static Float Block( Float &y,int &hash,Float &x){
										HX_STACK_PUSH("*::closure","native/display/BitmapData.hx",801);
										{
											HX_STACK_LINE(801)
											return (  (((hash < (int)8))) ? Float(x) : Float(y) );
										}
										return null();
									}
								};
								struct _Function_7_8{
									inline static Float Block( Float &y,int &hash,Float &x,Float &z1){
										HX_STACK_PUSH("*::closure","native/display/BitmapData.hx",801);
										{
											HX_STACK_LINE(801)
											return (  (((hash < (int)4))) ? Float(y) : Float((  (((hash == (int)12))) ? Float(x) : Float(z1) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(801)
								Float g4 = (((  (((((int(hash) & int((int)1))) == (int)0))) ? Float(_Function_7_7::Block(y,hash,x)) : Float((  (((hash < (int)8))) ? Float(-(x)) : Float(-(y)) )) )) + ((  (((((int(hash) & int((int)2))) == (int)0))) ? Float(_Function_7_8::Block(y,hash,x,z1)) : Float((  (((hash < (int)4))) ? Float(-(y)) : Float((  (((hash == (int)14))) ? Float(-(x)) : Float(-(z1)) )) )) )));		HX_STACK_VAR(g4,"g4");
								HX_STACK_LINE(803)
								hash = (int(p->__get(BB)) & int((int)15));
								struct _Function_7_9{
									inline static Float Block( Float &y1,Float &x1,int &hash){
										HX_STACK_PUSH("*::closure","native/display/BitmapData.hx",804);
										{
											HX_STACK_LINE(804)
											return (  (((hash < (int)8))) ? Float(x1) : Float(y1) );
										}
										return null();
									}
								};
								struct _Function_7_10{
									inline static Float Block( Float &y1,Float &z,Float &x1,int &hash){
										HX_STACK_PUSH("*::closure","native/display/BitmapData.hx",804);
										{
											HX_STACK_LINE(804)
											return (  (((hash < (int)4))) ? Float(y1) : Float((  (((hash == (int)12))) ? Float(x1) : Float(z) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(804)
								Float g5 = (((  (((((int(hash) & int((int)1))) == (int)0))) ? Float(_Function_7_9::Block(y1,x1,hash)) : Float((  (((hash < (int)8))) ? Float(-(x1)) : Float(-(y1)) )) )) + ((  (((((int(hash) & int((int)2))) == (int)0))) ? Float(_Function_7_10::Block(y1,z,x1,hash)) : Float((  (((hash < (int)4))) ? Float(-(y1)) : Float((  (((hash == (int)14))) ? Float(-(x1)) : Float(-(z)) )) )) )));		HX_STACK_VAR(g5,"g5");
								HX_STACK_LINE(806)
								hash = (int(p->__get(AB)) & int((int)15));
								struct _Function_7_11{
									inline static Float Block( Float &y1,int &hash,Float &x){
										HX_STACK_PUSH("*::closure","native/display/BitmapData.hx",807);
										{
											HX_STACK_LINE(807)
											return (  (((hash < (int)8))) ? Float(x) : Float(y1) );
										}
										return null();
									}
								};
								struct _Function_7_12{
									inline static Float Block( Float &y1,Float &z,int &hash,Float &x){
										HX_STACK_PUSH("*::closure","native/display/BitmapData.hx",807);
										{
											HX_STACK_LINE(807)
											return (  (((hash < (int)4))) ? Float(y1) : Float((  (((hash == (int)12))) ? Float(x) : Float(z) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(807)
								Float g6 = (((  (((((int(hash) & int((int)1))) == (int)0))) ? Float(_Function_7_11::Block(y1,hash,x)) : Float((  (((hash < (int)8))) ? Float(-(x)) : Float(-(y1)) )) )) + ((  (((((int(hash) & int((int)2))) == (int)0))) ? Float(_Function_7_12::Block(y1,z,hash,x)) : Float((  (((hash < (int)4))) ? Float(-(y1)) : Float((  (((hash == (int)14))) ? Float(-(x)) : Float(-(z)) )) )) )));		HX_STACK_VAR(g6,"g6");
								HX_STACK_LINE(809)
								hash = (int(p->__get(BA)) & int((int)15));
								struct _Function_7_13{
									inline static Float Block( Float &x1,Float &y,int &hash){
										HX_STACK_PUSH("*::closure","native/display/BitmapData.hx",810);
										{
											HX_STACK_LINE(810)
											return (  (((hash < (int)8))) ? Float(x1) : Float(y) );
										}
										return null();
									}
								};
								struct _Function_7_14{
									inline static Float Block( Float &z,Float &y,Float &x1,int &hash){
										HX_STACK_PUSH("*::closure","native/display/BitmapData.hx",810);
										{
											HX_STACK_LINE(810)
											return (  (((hash < (int)4))) ? Float(y) : Float((  (((hash == (int)12))) ? Float(x1) : Float(z) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(810)
								Float g7 = (((  (((((int(hash) & int((int)1))) == (int)0))) ? Float(_Function_7_13::Block(x1,y,hash)) : Float((  (((hash < (int)8))) ? Float(-(x1)) : Float(-(y)) )) )) + ((  (((((int(hash) & int((int)2))) == (int)0))) ? Float(_Function_7_14::Block(z,y,x1,hash)) : Float((  (((hash < (int)4))) ? Float(-(y)) : Float((  (((hash == (int)14))) ? Float(-(x1)) : Float(-(z)) )) )) )));		HX_STACK_VAR(g7,"g7");
								HX_STACK_LINE(812)
								hash = (int(p->__get(AA)) & int((int)15));
								struct _Function_7_15{
									inline static Float Block( Float &y,int &hash,Float &x){
										HX_STACK_PUSH("*::closure","native/display/BitmapData.hx",813);
										{
											HX_STACK_LINE(813)
											return (  (((hash < (int)8))) ? Float(x) : Float(y) );
										}
										return null();
									}
								};
								struct _Function_7_16{
									inline static Float Block( Float &z,Float &y,int &hash,Float &x){
										HX_STACK_PUSH("*::closure","native/display/BitmapData.hx",813);
										{
											HX_STACK_LINE(813)
											return (  (((hash < (int)4))) ? Float(y) : Float((  (((hash == (int)12))) ? Float(x) : Float(z) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(813)
								Float g8 = (((  (((((int(hash) & int((int)1))) == (int)0))) ? Float(_Function_7_15::Block(y,hash,x)) : Float((  (((hash < (int)8))) ? Float(-(x)) : Float(-(y)) )) )) + ((  (((((int(hash) & int((int)2))) == (int)0))) ? Float(_Function_7_16::Block(z,y,hash,x)) : Float((  (((hash < (int)4))) ? Float(-(y)) : Float((  (((hash == (int)14))) ? Float(-(x)) : Float(-(z)) )) )) )));		HX_STACK_VAR(g8,"g8");
								HX_STACK_LINE(815)
								hx::AddEq(g2,(u * ((g1 - g2))));
								HX_STACK_LINE(816)
								hx::AddEq(g4,(u * ((g3 - g4))));
								HX_STACK_LINE(817)
								hx::AddEq(g6,(u * ((g5 - g6))));
								HX_STACK_LINE(818)
								hx::AddEq(g8,(u * ((g7 - g8))));
								HX_STACK_LINE(820)
								hx::AddEq(g4,(v * ((g2 - g4))));
								HX_STACK_LINE(821)
								hx::AddEq(g8,(v * ((g6 - g8))));
								HX_STACK_LINE(823)
								hx::AddEq(s,(((g8 + (w * ((g4 - g8))))) * fPers));
							}
						}
						HX_STACK_LINE(826)
						int color = ::Std_obj::_int(((((s * this->fPersMax) + (int)1)) * (int)128));		HX_STACK_VAR(color,"color");
						HX_STACK_LINE(831)
						int pixel = (int((int((int((int)-16777216) | int((int(color) << int((int)16))))) | int((int(color) << int((int)8))))) | int(color));		HX_STACK_VAR(pixel,"pixel");
						HX_STACK_LINE(834)
						bitmap->setPixel32(px,py,pixel);
						HX_STACK_LINE(836)
						hx::AddEq(_x,this->baseFactor);
					}
				}
				HX_STACK_LINE(839)
				hx::AddEq(_y,this->baseFactor);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(OptimizedPerlin_obj,fill,(void))

Array< int > OptimizedPerlin_obj::P;


OptimizedPerlin_obj::OptimizedPerlin_obj()
{
}

void OptimizedPerlin_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptimizedPerlin);
	HX_MARK_MEMBER_NAME(baseFactor,"baseFactor");
	HX_MARK_MEMBER_NAME(iZoffset,"iZoffset");
	HX_MARK_MEMBER_NAME(iYoffset,"iYoffset");
	HX_MARK_MEMBER_NAME(iXoffset,"iXoffset");
	HX_MARK_MEMBER_NAME(fPersMax,"fPersMax");
	HX_MARK_MEMBER_NAME(aOctPers,"aOctPers");
	HX_MARK_MEMBER_NAME(aOctFreq,"aOctFreq");
	HX_MARK_MEMBER_NAME(octaves,"octaves");
	HX_MARK_END_CLASS();
}

void OptimizedPerlin_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(baseFactor,"baseFactor");
	HX_VISIT_MEMBER_NAME(iZoffset,"iZoffset");
	HX_VISIT_MEMBER_NAME(iYoffset,"iYoffset");
	HX_VISIT_MEMBER_NAME(iXoffset,"iXoffset");
	HX_VISIT_MEMBER_NAME(fPersMax,"fPersMax");
	HX_VISIT_MEMBER_NAME(aOctPers,"aOctPers");
	HX_VISIT_MEMBER_NAME(aOctFreq,"aOctFreq");
	HX_VISIT_MEMBER_NAME(octaves,"octaves");
}

Dynamic OptimizedPerlin_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"P") ) { return P; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { return fill_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"octaves") ) { return octaves; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iZoffset") ) { return iZoffset; }
		if (HX_FIELD_EQ(inName,"iYoffset") ) { return iYoffset; }
		if (HX_FIELD_EQ(inName,"iXoffset") ) { return iXoffset; }
		if (HX_FIELD_EQ(inName,"fPersMax") ) { return fPersMax; }
		if (HX_FIELD_EQ(inName,"aOctPers") ) { return aOctPers; }
		if (HX_FIELD_EQ(inName,"aOctFreq") ) { return aOctFreq; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"seedOffset") ) { return seedOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"baseFactor") ) { return baseFactor; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"octFreqPers") ) { return octFreqPers_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OptimizedPerlin_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"P") ) { P=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"octaves") ) { octaves=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iZoffset") ) { iZoffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iYoffset") ) { iYoffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iXoffset") ) { iXoffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fPersMax") ) { fPersMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aOctPers") ) { aOctPers=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aOctFreq") ) { aOctFreq=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"baseFactor") ) { baseFactor=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OptimizedPerlin_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("baseFactor"));
	outFields->push(HX_CSTRING("iZoffset"));
	outFields->push(HX_CSTRING("iYoffset"));
	outFields->push(HX_CSTRING("iXoffset"));
	outFields->push(HX_CSTRING("fPersMax"));
	outFields->push(HX_CSTRING("aOctPers"));
	outFields->push(HX_CSTRING("aOctFreq"));
	outFields->push(HX_CSTRING("octaves"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("P"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("seedOffset"),
	HX_CSTRING("octFreqPers"),
	HX_CSTRING("fill"),
	HX_CSTRING("baseFactor"),
	HX_CSTRING("iZoffset"),
	HX_CSTRING("iYoffset"),
	HX_CSTRING("iXoffset"),
	HX_CSTRING("fPersMax"),
	HX_CSTRING("aOctPers"),
	HX_CSTRING("aOctFreq"),
	HX_CSTRING("octaves"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptimizedPerlin_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OptimizedPerlin_obj::P,"P");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptimizedPerlin_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OptimizedPerlin_obj::P,"P");
};

Class OptimizedPerlin_obj::__mClass;

void OptimizedPerlin_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("native.display.OptimizedPerlin"), hx::TCanCast< OptimizedPerlin_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void OptimizedPerlin_obj::__boot()
{
	P= Array_obj< int >::__new().Add((int)151).Add((int)160).Add((int)137).Add((int)91).Add((int)90).Add((int)15).Add((int)131).Add((int)13).Add((int)201).Add((int)95).Add((int)96).Add((int)53).Add((int)194).Add((int)233).Add((int)7).Add((int)225).Add((int)140).Add((int)36).Add((int)103).Add((int)30).Add((int)69).Add((int)142).Add((int)8).Add((int)99).Add((int)37).Add((int)240).Add((int)21).Add((int)10).Add((int)23).Add((int)190).Add((int)6).Add((int)148).Add((int)247).Add((int)120).Add((int)234).Add((int)75).Add((int)0).Add((int)26).Add((int)197).Add((int)62).Add((int)94).Add((int)252).Add((int)219).Add((int)203).Add((int)117).Add((int)35).Add((int)11).Add((int)32).Add((int)57).Add((int)177).Add((int)33).Add((int)88).Add((int)237).Add((int)149).Add((int)56).Add((int)87).Add((int)174).Add((int)20).Add((int)125).Add((int)136).Add((int)171).Add((int)168).Add((int)68).Add((int)175).Add((int)74).Add((int)165).Add((int)71).Add((int)134).Add((int)139).Add((int)48).Add((int)27).Add((int)166).Add((int)77).Add((int)146).Add((int)158).Add((int)231).Add((int)83).Add((int)111).Add((int)229).Add((int)122).Add((int)60).Add((int)211).Add((int)133).Add((int)230).Add((int)220).Add((int)105).Add((int)92).Add((int)41).Add((int)55).Add((int)46).Add((int)245).Add((int)40).Add((int)244).Add((int)102).Add((int)143).Add((int)54).Add((int)65).Add((int)25).Add((int)63).Add((int)161).Add((int)1).Add((int)216).Add((int)80).Add((int)73).Add((int)209).Add((int)76).Add((int)132).Add((int)187).Add((int)208).Add((int)89).Add((int)18).Add((int)169).Add((int)200).Add((int)196).Add((int)135).Add((int)130).Add((int)116).Add((int)188).Add((int)159).Add((int)86).Add((int)164).Add((int)100).Add((int)109).Add((int)198).Add((int)173).Add((int)186).Add((int)3).Add((int)64).Add((int)52).Add((int)217).Add((int)226).Add((int)250).Add((int)124).Add((int)123).Add((int)5).Add((int)202).Add((int)38).Add((int)147).Add((int)118).Add((int)126).Add((int)255).Add((int)82).Add((int)85).Add((int)212).Add((int)207).Add((int)206).Add((int)59).Add((int)227).Add((int)47).Add((int)16).Add((int)58).Add((int)17).Add((int)182).Add((int)189).Add((int)28).Add((int)42).Add((int)223).Add((int)183).Add((int)170).Add((int)213).Add((int)119).Add((int)248).Add((int)152).Add((int)2).Add((int)44).Add((int)154).Add((int)163).Add((int)70).Add((int)221).Add((int)153).Add((int)101).Add((int)155).Add((int)167).Add((int)43).Add((int)172).Add((int)9).Add((int)129).Add((int)22).Add((int)39).Add((int)253).Add((int)19).Add((int)98).Add((int)108).Add((int)110).Add((int)79).Add((int)113).Add((int)224).Add((int)232).Add((int)178).Add((int)185).Add((int)112).Add((int)104).Add((int)218).Add((int)246).Add((int)97).Add((int)228).Add((int)251).Add((int)34).Add((int)242).Add((int)193).Add((int)238).Add((int)210).Add((int)144).Add((int)12).Add((int)191).Add((int)179).Add((int)162).Add((int)241).Add((int)81).Add((int)51).Add((int)145).Add((int)235).Add((int)249).Add((int)14).Add((int)239).Add((int)107).Add((int)49).Add((int)192).Add((int)214).Add((int)31).Add((int)181).Add((int)199).Add((int)106).Add((int)157).Add((int)184).Add((int)84).Add((int)204).Add((int)176).Add((int)115).Add((int)121).Add((int)50).Add((int)45).Add((int)127).Add((int)4).Add((int)150).Add((int)254).Add((int)138).Add((int)236).Add((int)205).Add((int)93).Add((int)222).Add((int)114).Add((int)67).Add((int)29).Add((int)24).Add((int)72).Add((int)243).Add((int)141).Add((int)128).Add((int)195).Add((int)78).Add((int)66).Add((int)215).Add((int)61).Add((int)156).Add((int)180).Add((int)151).Add((int)160).Add((int)137).Add((int)91).Add((int)90).Add((int)15).Add((int)131).Add((int)13).Add((int)201).Add((int)95).Add((int)96).Add((int)53).Add((int)194).Add((int)233).Add((int)7).Add((int)225).Add((int)140).Add((int)36).Add((int)103).Add((int)30).Add((int)69).Add((int)142).Add((int)8).Add((int)99).Add((int)37).Add((int)240).Add((int)21).Add((int)10).Add((int)23).Add((int)190).Add((int)6).Add((int)148).Add((int)247).Add((int)120).Add((int)234).Add((int)75).Add((int)0).Add((int)26).Add((int)197).Add((int)62).Add((int)94).Add((int)252).Add((int)219).Add((int)203).Add((int)117).Add((int)35).Add((int)11).Add((int)32).Add((int)57).Add((int)177).Add((int)33).Add((int)88).Add((int)237).Add((int)149).Add((int)56).Add((int)87).Add((int)174).Add((int)20).Add((int)125).Add((int)136).Add((int)171).Add((int)168).Add((int)68).Add((int)175).Add((int)74).Add((int)165).Add((int)71).Add((int)134).Add((int)139).Add((int)48).Add((int)27).Add((int)166).Add((int)77).Add((int)146).Add((int)158).Add((int)231).Add((int)83).Add((int)111).Add((int)229).Add((int)122).Add((int)60).Add((int)211).Add((int)133).Add((int)230).Add((int)220).Add((int)105).Add((int)92).Add((int)41).Add((int)55).Add((int)46).Add((int)245).Add((int)40).Add((int)244).Add((int)102).Add((int)143).Add((int)54).Add((int)65).Add((int)25).Add((int)63).Add((int)161).Add((int)1).Add((int)216).Add((int)80).Add((int)73).Add((int)209).Add((int)76).Add((int)132).Add((int)187).Add((int)208).Add((int)89).Add((int)18).Add((int)169).Add((int)200).Add((int)196).Add((int)135).Add((int)130).Add((int)116).Add((int)188).Add((int)159).Add((int)86).Add((int)164).Add((int)100).Add((int)109).Add((int)198).Add((int)173).Add((int)186).Add((int)3).Add((int)64).Add((int)52).Add((int)217).Add((int)226).Add((int)250).Add((int)124).Add((int)123).Add((int)5).Add((int)202).Add((int)38).Add((int)147).Add((int)118).Add((int)126).Add((int)255).Add((int)82).Add((int)85).Add((int)212).Add((int)207).Add((int)206).Add((int)59).Add((int)227).Add((int)47).Add((int)16).Add((int)58).Add((int)17).Add((int)182).Add((int)189).Add((int)28).Add((int)42).Add((int)223).Add((int)183).Add((int)170).Add((int)213).Add((int)119).Add((int)248).Add((int)152).Add((int)2).Add((int)44).Add((int)154).Add((int)163).Add((int)70).Add((int)221).Add((int)153).Add((int)101).Add((int)155).Add((int)167).Add((int)43).Add((int)172).Add((int)9).Add((int)129).Add((int)22).Add((int)39).Add((int)253).Add((int)19).Add((int)98).Add((int)108).Add((int)110).Add((int)79).Add((int)113).Add((int)224).Add((int)232).Add((int)178).Add((int)185).Add((int)112).Add((int)104).Add((int)218).Add((int)246).Add((int)97).Add((int)228).Add((int)251).Add((int)34).Add((int)242).Add((int)193).Add((int)238).Add((int)210).Add((int)144).Add((int)12).Add((int)191).Add((int)179).Add((int)162).Add((int)241).Add((int)81).Add((int)51).Add((int)145).Add((int)235).Add((int)249).Add((int)14).Add((int)239).Add((int)107).Add((int)49).Add((int)192).Add((int)214).Add((int)31).Add((int)181).Add((int)199).Add((int)106).Add((int)157).Add((int)184).Add((int)84).Add((int)204).Add((int)176).Add((int)115).Add((int)121).Add((int)50).Add((int)45).Add((int)127).Add((int)4).Add((int)150).Add((int)254).Add((int)138).Add((int)236).Add((int)205).Add((int)93).Add((int)222).Add((int)114).Add((int)67).Add((int)29).Add((int)24).Add((int)72).Add((int)243).Add((int)141).Add((int)128).Add((int)195).Add((int)78).Add((int)66).Add((int)215).Add((int)61).Add((int)156).Add((int)180);
}

} // end namespace native
} // end namespace display
