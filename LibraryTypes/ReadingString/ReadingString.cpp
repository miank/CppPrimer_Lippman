// ReadingString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	while (cin >> word)
	{
		cout << word << endl;
	}
	string s1;
	cin >> s1;
	cout << s1 << endl;

	string line;
	while(getline(cin, line))
		cout << line << endl;

    return 0;
}

