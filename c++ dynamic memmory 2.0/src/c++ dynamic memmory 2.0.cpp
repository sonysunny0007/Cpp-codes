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
	int *ptr = new int;
	*ptr = 25;

	cout<<"Value: "<< *ptr <<endl;
	cout<< "Address: "<< ptr <<endl;

	free(ptr);


	return 0;
}
