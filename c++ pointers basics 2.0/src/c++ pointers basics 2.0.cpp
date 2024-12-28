//============================================================================
// Name        : 0.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int val=10;
	int *ptr = &val;

	cout<<"Value: "<<val<<endl;
	cout<<"Address: "<<ptr<<endl;
	cout<<"Deferenced value: "<<*ptr<<endl;

	return 0;
}
