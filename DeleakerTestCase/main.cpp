#include <iostream>

class Foo
{

};

struct Bar
{

};

int main()
{
	// TypeId name will be reported as leak in Windows Debug x64 build
	// According to https://msdn.microsoft.com/en-us/library/70ky2y6k(v=VS.90).aspx the name char pointer should never be directly deallocated

	const char* fooName = typeid(Foo).name();
	const char* barName = typeid(Bar).name();

	std::cout << "Foo type name is " << fooName << std::endl;
	std::cout << "Bar type name is " << barName << std::endl;

	return 0;
}
