// Ex_9.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> ivec;
	vector<int> ivec2(ivec);
	vector<int> ivec3(10, 2); // initialize 10 elements with 2
	
	int arr[4] = { 1, 2, 3, 4 };
	size_t size = sizeof(arr) / sizeof(int);

	vector<int> ivec4(arr, arr + size);


    return 0;
}

