//============================================================================
// Name        : cpp.cpp
// Author      : Sony Sunny
// Version     :
// Copyright   : Your copyright notice
// Description : Multilevel inheritance example
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class School{
public:
	int id;
	void getMySchoolName(){
		cout<<"Sacred Heart"<<endl;
	}
};

class Student:public School{
public:
	int id;
	void studentInfo(int id){
		cout<<"Student id: "<<id<<endl;
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
		Student::studentInfo(id);
	}
};



int main() {

	Teacher teacher(23);
//	teacher.teacherInfo();
	Student student;
	student.studentInfo(17);
	return 0;
}
