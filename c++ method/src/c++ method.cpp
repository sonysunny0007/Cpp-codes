//============================================================================
// Name        : c++.cpp
// Author      : Sony Sunny
// Version     :
// Copyright   : Your copyright notice
// Description : Method example with user defined custom structure
//============================================================================

#include <iostream>
using namespace std;
#include<string>

struct CS_MODEM_CS{
	unsigned char status;
	int data;
	int temp;
};


class display
{
public:
/*	void displayonscreen(string a){		//function inside the class
		cout<<a<<endl;
	}*/

void displayonscreen(string a);
bool callback();
};

void display::displayonscreen(string a){
	cout<<a<<endl;
}

bool display::callback(){
	CS_MODEM_CS res;
	res.status=1;
	return (res.status);
}


int main() {
	display sony;
	sony.displayonscreen("Tiya");
	int status=sony.callback();
	cout<<status<<endl;
	return 0;
}
