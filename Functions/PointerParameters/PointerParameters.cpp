// PointerParameters.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

void reset(int *ip)		// use const if you don't want the value of *p not to be changed - const int *ip
{
	*ip = 0;
	cout << ip << endl;
	ip = 0;
}

int main()
{
	int i = 42;
	int *p = &i;
	cout << "i : " << *p << endl;
	cout << p << endl;
	reset(p);
	cout << "i : " << *p << endl;
    return 0;
}

