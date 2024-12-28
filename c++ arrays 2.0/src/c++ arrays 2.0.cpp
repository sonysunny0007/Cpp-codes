//============================================================================
// Name        : 0.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int numbers[]={1,2,3,4,5};
	int len = sizeof(numbers)/sizeof(numbers[0]);

	cout<<sizeof(numbers)<<endl;
	cout<<sizeof(numbers[0])<<endl;

	for(int i=0;i<len;i++){
		cout << "The numbers are: "<<numbers[i]<<endl;
	}

	return 0;
}
