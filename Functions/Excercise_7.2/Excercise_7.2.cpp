// Excercise_7.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// (a)
int f()
{
	string s;
	// return s;  ERROR return type is int.
}

// (b)
// f2(int i) { } ERROR return type is missing

// (c)
// int calc(int v1, int v1) { ........ } ERROR return statement is missing

// (d)
double square(double x)
{
	return x * x;   // perfectly correct
}


int main()
{
    return 0;
}

