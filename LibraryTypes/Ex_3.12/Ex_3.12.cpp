// Ex_3.12.cpp :

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> ivec1; // empty
	vector<int> ivec2(10);  // 0 
	vector<int> ivec3(10, 42);
	vector<string> svec1; // empty
	vector<string> svec2(10); // 10 empty string
	vector<string> svec3(10, "hello"); // 10 hello

	for (vector<int>::iterator i = ivec3.begin(); i != ivec3.end(); i++)
	{
		cout << *i << endl;
	}

	for (vector<string>::iterator it = svec3.begin(); it != svec3.end(); it++)
	{
		cout << *it << endl;
	}
    return 0;
}

