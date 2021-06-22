#include <stdio.h>
#include <iostream>

#include "sample.h"
#include "class_demo.h"

void TestClass(void)
{
	Subclass subc;
    Base *pBase = &subc;   
    Subclass *pSub = &subc;

    pBase->Func1(123);
    pSub->Func1(123);

    pBase->Func2(123);
    pSub->Func2(123);

    pBase->Func3(123);
	pSub->Func3(123);
    pSub->Func3(1.23f);
    pSub->Func3(1.23);
}

int main(int argc, char *argv[])
{
	TestCalc(1, 2);
	TestCalc(10, 20);
	TestCalc(100, 200);
	
	std::cout << "~~~~~~~~~~~~~~~~~~~~" << std::endl;
	TestClass();
	
	return 0;
}
