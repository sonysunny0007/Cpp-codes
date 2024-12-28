//============================================================================
// Name        : header.cpp
// Author      : Sony Sunny
// Version     :
// Copyright   : Your copyright notice
// Description : Header inclusion examples
//============================================================================

#include <iostream>
#include "header_inclusion.hpp"
using namespace std;



int main() {
	Student student("Sony");
	cout <<student.getName()<< endl; // prints !!!Hello World!!!
	return 0;
}
