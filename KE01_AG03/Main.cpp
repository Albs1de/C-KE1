#include <iostream>
/*
Template Name dazu schreiben!
template <class T>
T Add(R% rR, S% rS);
*/
struct Point
{
	int32_t s32X;
	int32_t s32Y;
	uint8_t au8VeryLongUnusedDescription[100];
};

//typedefs declaration
typedef Point tPointer_t;
typedef float f32_t;
typedef int int32_t;
typedef double f64_t;
//typedef unsigned int uint8_t;

template <class T>
T MySwap(T& x, T& y)
{
	T tZ = x;
	x = y;
	y = tZ;
	return 0;
}
template <class X, class X2>
X Add(X& x, X2& y)
{
	X result;
	result = x + y;

	return result;
}
template <typename T>
std::string get_type_name(T var)
{
	return typeid(var).name();
}
int main(void)
{
	int iFirstValue = 5;
	int iSecondValue = 10;

	float fFirstValue = 15.5F;
	float fSecondValue = 20.5F;

	Point pPoint1;
	pPoint1.s32X = 12;
	pPoint1.s32Y = 42;
	

	

	//int32_t
	int32_t i32Value1 = 23;
	int32_t i32Value2 = 26;

	//f32_t
	f32_t f32Value1 = 23.29F;
	f32_t f32Value2 = 26.29F;
	f32_t f32Result = Add<f32_t, f32_t>(f32Value1, f32Value2);
	f32_t f32Result2 = Add<int32_t, f32_t>(i32Value1, f32Value2);
	

	//f4_t
	f64_t f64Value = 42.99;
	f64_t f64Res = 42.99;
	f64_t f64Res2 = Add<f32_t, f64_t>(f32Value1, f64Value);
	//uint8_t
	uint8_t uiChar = '2';
	uint8_t u8Val = Add<uint8_t, f64_t>(uiChar, f64Value);
	
	//testing with auto
	auto ax1 = 5;
	auto ax2 = 5.5;
	auto ax3 = 5.5F;

	Point sPoint1;
	Point s32Val1;
	Point s32Val2;
	s32Val1.s32X = 10;
	s32Val1.s32Y = 10;

	s32Val2.s32X = 20;
	s32Val2.s32Y = 20;
	//auto as = sPoint1;

	auto asum1 = f32Result;
	auto asum2 = f32Result2;
	auto asum3 = f64Res2;
	auto asum4 = u8Val;

	auto aGet1 = get_type_name(asum1);
	auto aGet2 = get_type_name(asum2);
	auto aGet3 = get_type_name(asum3);
	auto aGet4 = get_type_name(asum4);

	

	//Test for Template T with int
	std::cout << "Print template with Int: " << std::endl;
	std::cout << "(int) Values before Swap: " << iFirstValue << " | "  << iSecondValue << std::endl;
	MySwap<int>(iFirstValue, iSecondValue);
	std::cout << "(int) Values after Swap: " << iFirstValue << " | " << iSecondValue << std::endl;
	std::cout << '\n' << std::endl;
	


	//Test for Template T with float
	std::cout << "Print template with float: " << std::endl;
	std::cout << "(float) Values before Swap: " << fFirstValue << " | " << fSecondValue << std::endl;
	MySwap<float>(fFirstValue, fSecondValue);
	std::cout << "(float) Values after Swap: " << fFirstValue << " | " << fSecondValue << std::endl;
	std::cout << '\n' << std::endl;

	//Test for Template T with struct Point
	/*MySwap<tPointer_t*>(pPoint1.s32X, pPoint1.s32Y);
	std::cout << "Print template with struct Point: " << std::endl;
	std::cout << pPoint1.s32X << std::endl;
	std::cout << pPoint1.s32Y << std::endl;*/


	//Add for f32_t + f32_t
	std::cout << "Print Add template with f32_t + f32_t: " << std::endl;
	std::cout << f32Value1 << " + " << f32Value2 << " = " << f32Result;
	std::cout << '\n' << std::endl;

	//Add for int32_t + f32_t
	std::cout << "Print Add template with int32_t + f32_t: " << std::endl;
	std::cout << i32Value1 << " + " << f32Value1 << " = " << f32Result2;
	std::cout << '\n' << std::endl;
	
	//Add for f32_t + f64_t
	std::cout << "Print Add template with f32_t + f64_t: " << std::endl;
	std::cout << f32Value1 << " + " << f64Value << " = " << f64Res2;
	std::cout << '\n' << std::endl;

	//Add for uint8 + f64_t
	std::cout << "Print Add template with uint8_t + f64_t: " << std::endl;
	std::cout << uiChar << " + " << f64Value << " = " << u8Val;
	std::cout << '\n' << std::endl;


	//print auto-datatype
	std::cout << "aGet1: " << aGet1 << std::endl;
	std::cout << "aGet2: " << aGet2 << std::endl;
	std::cout << "aGet3: " << aGet3 << std::endl;
	std::cout << "aGet4: " << aGet4 << std::endl;



	return 0;

}

