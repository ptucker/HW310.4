// HW3 10.4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

string sort(string& s) {

	string string1 = "e";
	string string2 = "s";
	s.replace(0, 1, string1);
	s.replace(3, 1, string2);

	return s;
}


int main()
{
	string s;
	cout << "Enter a string s ";
	getline(cin, s);
	cout << "The sorted string is " << sort(s);
	cout << endl;
	return 0;
}

