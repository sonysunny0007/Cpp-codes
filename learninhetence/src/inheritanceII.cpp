/*
 * inheritanceII.CPP
 *
 *  Created on: Jul. 13, 2024
 *      Author: sony
 */

#include<iostream>
#include<string>
using namespace std;

class Organisation{
public:
	int id;
	string name;
	void showOrganisationName(){
		cout<<"Organisation Name is: IoTGliders";
	}
};

class CEO:public Organisation{
private:
	string name;
	int status;
public:
	CEO(string name,int status){
		this->name=name;
		this->status=status;
		cout<<"CEO name is"<<name<<endl;
		Organisation::showOrganisationName();
	}
public:
	void isHeWorking(){
		cout<<(status>0 ?"...is Working" : "No he is not working today")<<endl;
		}

};

class Manager:public Organisation{
private:
	string name;
	int status;
public:
	Manager(string name, int status){
		this->name=name;
		this->status=status;
		cout<<"CEO name is"<<name<<endl;
		Organisation::showOrganisationName();
	}

	void isHeWorking(){
		cout<<(status>0 ?"...is Working" : "No he is not working today")<<endl;
		}
};


int main(){
	CEO ceo("Sony",1);
	ceo.isHeWorking();
}

