//============================================================================
// Name        : cpp.cpp
// Author      : Sony Sunny
// Version     :
// Copyright   : Your copyright notice
// Description : Selftest
//============================================================================

#include <iostream>
#include "selftest.hpp"
using namespace std;

int main() {

	Network modem("VC1234");
//	modem.setInfo("VC3214");
	cout << modem.getInfo()<< endl;
	return 0;
}
