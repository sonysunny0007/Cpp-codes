//============================================================================
// Name        : 0.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int add (int a, int b){
	return a+b;
}

int add (int a, int b, int c){
	return a+b+c;
}
int main() {
	cout << "add(a,b): "<< add(1,2)<< endl;
	cout << "add(a,b,c): "<< add(1,2,3)<< endl;
	return 0;
}
