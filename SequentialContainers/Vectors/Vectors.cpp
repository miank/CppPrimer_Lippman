// Vectors.cpp : 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

class Sales_item
{

};

int main()
{
	vector<string> svec;  // empty vector that can hold strings
	list<int> ilist;  // list that hold ints
	deque<Sales_item> items;  // empty deque that holds sales_item

	// initializing as copy of another container

	vector<int> ivec;
	vector<int> ivec2(ivec);  // ivec is vector of int

	//list<int> ilist1(ivec); // ivec is not list<int>
	//vector<double> dvec(ivec); // ivec holds int not double

	// Assigning the list using vectors of same data types
	list<string> slist(svec.begin(), svec.end());

	// finding the midpoint of vector
	vector<string>::iterator mid = svec.begin() + svec.size() / 2;

	// initialize front with first half
	deque<string> front(svec.begin(), mid);
	// initialize end with second half
	deque<string> end(mid, svec.end());

	// initialize back with second half
	deque<string> back(mid, svec.end());

	char *words[] = { "hello", "world", "sequential", "conatiner" };

	// calculate how many elements in words  *****
	size_t words_size = sizeof(words) / sizeof(char*);

	// use the entire array to initialize words2  *****
	list<string> words2(words, words + words_size);

	// Allocating specifiec no of elements
	const list<int>::size_type list_size = 64;
	list<string> slist1(list_size, "eh"); // 64 elements eh

	//list<int> ilist2(list_size);
	//extern unsigned get_word_count(const string &file_name);
	//vector<string> svec2(get_word_count("Chimera"));

	// Container of containers
	vector< vector<string> > lines; // vector of vector


    return 0;
}

