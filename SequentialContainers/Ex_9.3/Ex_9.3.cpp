// Ex_9.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	// container to copy copies all the elements from one vector another.
	vector<int> ivec;
	vector<int> ivec2(ivec);

	// Iterator based can copy elements from one vector to another but specific elements or range based.

	int arr[4] = { 1, 2, 3, 4 };
	size_t size = sizeof(arr) / sizeof(int);
	vector<int> ivec4(arr, arr + size);

    return 0;
}

