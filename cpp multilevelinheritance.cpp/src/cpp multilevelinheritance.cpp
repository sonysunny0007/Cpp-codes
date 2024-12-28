//============================================================================
// Name        : cpp.cpp
// Author      : Sony Sunny
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class School{
public:
	void getMySchoolName(){
		cout<<"Sacred Heart"<<endl;
	}
};

class Student:public School{
public:
	void studentInfo(){
		School::getMySchoolName();
	}
};

class Teacher : public Student{
public:
	int id;
	Teacher(int id){
		this->id=id;
	}
	void teacherInfo(){
		cout<<"Teacher id: "<<id<<endl;
		Student getMySchoolName();
	}
};



int main() {

	Teacher teacher(23);
	teacher.teacherInfo();

	return 0;
}
