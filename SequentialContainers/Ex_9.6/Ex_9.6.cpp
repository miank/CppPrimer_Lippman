// Ex_9.6.cpp 

#include "stdafx.h"
#include <iostream>
#include <list>
using namespace std;

class Foo
{
public:
	Foo(int a)
	{

	}
};

int main()
{
	list<Foo> fooList(10, Foo(10));
    return 0;
}

