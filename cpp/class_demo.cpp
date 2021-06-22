#include <iostream>
#include "class_demo.h"

void Base::Func1(int x)
{
	std::cout << "Base::Func1 " << x << std::endl;
}
	
void Base::Func2(int x)
{
	std::cout << "Base::Func2 " << x << std::endl;
}

void Base::Func3(int x)
{
	std::cout << "Base::Func3 " << x << std::endl;
}

void Subclass::Func1(int x)
{
	std::cout << "Subclass::Func1 " << x << std::endl;
}

void Subclass::Func2(int x)
{
	std::cout << "Subclass::Func2 " << x << std::endl;
}

void Subclass::Func3(int x)
{
	std::cout << "Subclass::Func3(int) " << x << std::endl;
}

void Subclass::Func3(float x)
{
	std::cout << "Subclass::Func3(float) " << x << std::endl;
}

void Subclass::Func3(double x)
{
	std::cout << "Subclass::Func3(double) " << x << std::endl;
}
