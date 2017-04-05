// Ex_9.1.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

int main()
{
	int ia[7] = { 0, 1, 1, 2, 3, 5, 8 };
	string sa[6] = { "Fort Sumter", "Manassas", "Perryville", "Vicksburg", "Meridian", "Chancellorsvillie" };

	vector<string> svec(sa, sa + 6); // correct
	list<int> ilist(ia + 4, ia + 6); // correct
	//vector<int> ivec(ia + ia + 8); // error - accessing out of index
	list<string> slist(sa + 6, sa); // correct if compiled but invalid range from 6 to 0

	// while iteration it will crash

	for (std::list<string>::iterator it = slist.begin(); it != slist.end(); ++it)
		cout << *it << endl;

    return 0;
}

