// Excercise_7.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int f1(int a, int b)
{
	return a * b;
}

int main()
{
	int result = f1(2, 2);
	cout << "Result is " << result << endl;
    return 0;
}

