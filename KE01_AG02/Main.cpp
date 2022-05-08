#include <iostream>

enum class FileAccessMode
{
	Read = 0,
	Write,
	ReadWrite
};
typedef float f32_t;
void vOpenFile(const uint8_t* cpu8File, FileAccessMode eFileAccessMode);
f32_t f32Add(f32_t f32Val1, f32_t f32Val2, f32_t f32Val4 = 4);
int main(void)
{
	f32_t fVal1 = 2.0F;
	f32_t fVal2 = 4.0F;
	f32_t fVal3 = 6.0F;
	f32_t fRes1 = f32Add(fVal1, fVal2);
	f32_t fRes2 = f32Add(fVal1, fVal2, fVal3);
	std::cout << fRes1 << std::endl;
	std::cout << fRes2 << std::endl;

	std::string String1 = "Hallo";
	std::cout << String1 << std::endl;
	std::cout << String1.length() << std::endl;


	std::string String2;
	std::cin >> String2;
	std::cout << String2 << std::endl;
	String1 += String2;
	std::cout << String1 << std::endl;

	

}

void vOpenFile(const uint8_t* cpu8File, FileAccessMode eFileAccessMode)
{
	eFileAccessMode = FileAccessMode::ReadWrite;
	
	
	return _CRT_UNUSED(eFileAccessMode);
	
}
f32_t f32Add(f32_t f32Val1, f32_t f32Val2, f32_t f32Val4)
{
	f32_t fRes = f32Val1 + f32Val2 + f32Val4;
	return fRes;
}