/*
 * header inclusion.hpp
 *
 *  Created on: Jul. 13, 2024
 *      Author: sony
 */

#ifndef HEADER_INCLUSION_HPP_
#define HEADER_INCLUSION_HPP_

#include<iostream>
#include<string>

using namespace std;

class Student{
private:
	string name;
public:
	Student(string input);
	void setName(string input);
	string getName();
};


Student::Student(string input){
	name=input;
}

void Student::setName(string input){
	name=input;
}

string Student::getName(){
	return name;
}


#endif /* HEADER_INCLUSION_HPP_ */
