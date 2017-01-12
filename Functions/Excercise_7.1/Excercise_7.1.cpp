// Excercise_7.1.cpp : Defines the entry point for the console application.
// Diff b/w function and paramter

#include "stdafx.h"
#include <iostream>
using namespace std;

int func(int a, int b)  // function paramter are declared as part of defining the function.
{
	return a + b;
}

int main()
{
	int result = func(10, 10); // Arguments which is passed to function definition
	cout << "Addition is " << result << endl;
    return 0;
}

