// volatile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

volatile int a;

int main()
{
	std::cout << (a + a);
	return 0;
}

