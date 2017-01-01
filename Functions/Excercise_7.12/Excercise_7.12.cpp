// Excercise_7.12.cpp : Defines the entry point for the console application.
// When to use pointer and when to use array as reference ?
// Advantages and Disadvantages

// http://stackoverflow.com/questions/7058339/when-to-use-references-vs-pointers
// Use reference wherever you can, pointers wherever you must.
// Avoid pointers until you can't. The reason is that pointers make things harder to follow / read, 
// less safe and far more dangerous manipulations than any other constructs.
// So the rule of thumb is to use pointers only if there is no other choice.
// Another example is to use pointers to raw memory for specific memory manipulations. 
// That should be hidden and localized in very narrow parts of the code, to help limit the dangerous parts of the whole code base.
// In your example, there is no point in using a pointer as argument because : if you provide nullptr as the argument, 
// you're going in undefined-behaviour-land; the reference attribute version doesn't allow (without easy to spot tricks) the problem with 1.
// the reference attribute version is simpler to understand for the user : you have to provide a valid object, not something that could be null.


#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int printValue(int *arr, int size) {

	int sum(0);
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		sum = sum + arr[i];
	}
	return sum;
}

int main()
{
	const int size = 5;
	int arr[size] = { 0 };
	int total = printValue(arr, size);
	cout << total << endl;
    return 0;
}

