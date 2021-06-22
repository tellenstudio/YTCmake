#include <stdio.h>
#include "sample.h"
#include "calculation.h"

int Add(int a, int b);
int Sub(int a, int b);

void TestCalc(int a, int b)
{
	printf("%d + %d = %d\n", a, b, Add(a, b));
	printf("%d - %d = %d\n", a, b, Sub(a, b));
}