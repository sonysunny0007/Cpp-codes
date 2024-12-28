//============================================================================
// Name        : c++.cpp
// Author      : Sony Sunny
// Version     :
// Copyright   : Your copyright notice
// Description : Encapsulation example
//============================================================================

#include <iostream>
using namespace std;

class student{
private:
	int mark1, mark2;
public:

	//setter
	void setMarks(int mark1, int mark2){
		this->mark1=mark1;
		this->mark2=mark2;
	}

	//getter
	int getMarks(){
		return (mark1+mark2);
	}

};

int main() {
	student school;
	school.setMarks(100, 90);
	cout<<school.getMarks();
	return 0;
}
