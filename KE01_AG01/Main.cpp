#include <iostream>
/*
C++ 
Referenzen: A& rA = myA;     rA.a = 
Zeiger:		A* pA = &myA;    pA->a = 
Objektvariablen: A myA;		 myA.a =

Java
Nur Referenzen! A myA = new A();

void foo(int32_t& rs32);
int32_t s32V = 42;
int32_t& rs32V = s32V;
foo(rs32V);
foo(s32V);
-> Beides geht!
Beispiel 2:
void foo(int32_t& rs32);
void foo(int32_t s32Vx);
int32_t s32V = 42;
int32_t& rs32V = s32V;
foo(rs32V);
foo(s32V);
-> Compiler weiﬂ nicht welche er aufrufen soll!

*/
struct Point
{
	int32_t s32X;
	int32_t s32Y;
	uint8_t au8VeryLongUnusedDescription[100];
};
typedef int fint32_t;
typedef float f64_t;
typedef float f32_t;

//Function Declaration
void vPrint(fint32_t);
void vPrint(f64_t f32Val);
void vPrint(const int8_t* ci8Val);
void vPrint(int8_t* i8Val);
void vPrint(Point pVal);
int32_t Add(int32_t, int32_t);
int32_t Add(int32_t*, int32_t*);
int32_t Add(f32_t, f32_t);
//Point Add(Point ,Point);
Point Add(Point& ,Point&);

int main()
{
	Point pPointerX = { 10, 20, "New String" };
	Point pPointerY = { 20, 30, "New String" };
	fint32_t fint32Val_t = 5;
	int32_t iRes = 10;
	int32_t* iPoint = &iRes;
	f64_t f64Val_t = 5.0F;
	f32_t f32Val_t = 20.0F;
	const int8_t ci5Val_t = 5;
	int8_t i8Val_t = 5;
	Point pVal = { 5, 5, "Print this out." };
	
	vPrint(fint32Val_t);
	vPrint(f64Val_t);
	vPrint(ci5Val_t);
	vPrint(&i8Val_t);
	vPrint(pVal);
	
	
	int32_t iResult = Add(iRes, iRes);
	std::cout << iResult << std::endl;

	int32_t iRes2 = Add(iPoint, iPoint);
	std::cout << iRes2 << std::endl;

	int32_t iRes3 = Add(f32Val_t, f32Val_t);
	std::cout << iRes3 << std::endl;

	Point pPointAdd = Add(pPointerX, pPointerY);
	std::cout << pPointAdd.s32X << std::endl;
	std::cout << pPointAdd.s32Y << std::endl;

	/*TODO + TODO 1.3*/
	//Add(pPointerX, pPointerY);
	
	
	
}

//Function Definition
void vPrint(fint32_t fint32Val_t)
{
	std::cout << fint32Val_t << std::endl;
}
void vPrint(f64_t f32Val)
{
	std::cout << f32Val << std::endl;
}
void vPrint(const int8_t* ci8Val)
{
	std::cout << *ci8Val << std::endl;
}
void vPrint(int8_t* i8Val)
{
	//Casten nicht vergessen
	std::cout << (int)*i8Val << std::endl;
}
void vPrint(Point pVal)
{
	std::cout << pVal.s32X << std::endl;
	std::cout << pVal.s32Y << std::endl;
	std::cout << pVal.au8VeryLongUnusedDescription << std::endl;
}
int32_t Add(int32_t iValX, int32_t iValY)
{
	int32_t iResult = iValX + iValY;
	return iResult;
}
int32_t Add(int32_t* iValX, int32_t* iValY)
{
	int32_t iResult = (*iValX) + (*iValY);
	return iResult;
}
int32_t Add(f32_t fX, f32_t fY)
{
	f32_t iResult = (fX + fY);
	return iResult;
}

/*Point Add(Point pPointX, Point pPointY)
{
	Point pPointRes = { 0 };
	

	pPointRes.s32X = (pPointX.s32X + pPointY.s32X);
	pPointRes.s32Y = (pPointX.s32X + pPointY.s32X);
	
	return pPointRes;
}*/
Point Add(Point& pPointX, Point& pPointY)
{
	Point pPointRes = { 0 };


	pPointRes.s32X = (pPointX.s32X + pPointY.s32X);
	pPointRes.s32Y = (pPointX.s32X + pPointY.s32X);

	return pPointRes;
}