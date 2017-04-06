// Ex_9.4.cpp 

#include "stdafx.h"
#include <iostream>
#include <list>
#include <deque>
using namespace std;

int main()
{
	deque<int> ideque;
	list<int> ilist(ideque.begin(), ideque.end());

    return 0;
}

