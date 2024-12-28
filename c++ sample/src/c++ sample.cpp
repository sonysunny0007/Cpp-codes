//============================================================================
// Name        : c++.cpp
// Author      : Sony Sunny
// Version     :
// Copyright   : Your copyright notice
// Description : Basic c++ programs
//============================================================================

#include <iostream>
#include <string>
using namespace std;
#define PI 3.14

double area(int radius);

int value;


int calc(int x);
float calc(float x, float y);
double calc(double x);

/*int addition(int a , int b){
	int result=a+b;
	return result;
}*/


int main() {

//	int a;
//	char b;
//	float f;
//	double d;
//	long double ld;
//
//	cout<<sizeof(a)<<endl;
//	cout<<sizeof(b)<<endl;
//	cout<<sizeof(f)<<endl;
//	cout<<sizeof(d)<<endl;
//	cout<<sizeof(ld)<<endl;
//	cout << "Hello world" <<endl

//	int a,b;
//	cout<<"Enter two numbers"<<endl;
//	cin>>a>>b;
//	cout<<a<<b<<endl;
//	return 0;

//	int a=10, b=20;
//	int value;
//	value= addition(a,b);
//
//	value=value*10;
//	cout<< value<< endl;

//	bool light=false;
//	cout<<"Value"<<light<<endl;
//	light=true;

//	cout<<round(10.87)<<endl;
//	cout<<sqrt(4)<<endl;
//	cout<<sin(90)<<endl;

//	string firstname;
//	string secondname;
//
//	cout<<"Enter the first name";
//	cin>>firstname;
//	cout<<"Enter the last name";
//	cin>>secondname;
//
//	cout<<firstname<<" "<<secondname<<endl;


//	value=11;
//	string result= value%2==0 ? "even" : "false";
//	cout<<result;


//	cout<<"Area is: "<<area(3)<<endl;

//	string fruits[100]={"apple","banana","Grapes"};
//	cout<<fruits[5]<<endl;

//	int option;
//	cout<<"Enter your option";
//	cin>>option;
//	switch(option)
//	{
//	case 0:
//		cout<<"Sony";
//	break;
//	case 1:
//		cout<<"Tiya";
//	break;
//	default:
//		cout<<"The given option is not found";
//
//	}


//	string fruit="Apple";
//	string &breakfast=fruit;
//
//	cout<<fruit<<endl;
//	cout<<breakfast<<endl;


//	string breakfast="apple";
//	string* ptr= &breakfast;
//
//	cout<<breakfast<<endl;
//	cout<<&breakfast<<endl;
//	cout<<ptr<<endl;
//	cout<<*ptr<<endl;

//	int number1, number2;
//	cout<<"Enter the first number";
//	cin>>number1;
//	cout<<"Enter the second number";
//	cin>>number2;
//	int *ptr1=&number1, *ptr2=&number2;
//	int sum=*ptr1+*ptr2;
//	cout<<"The sum of the given two numbers are: "<<sum<<endl;

/*//Function overloading


	cout<<"First Function : "<<calc(10)<<endl;
	cout<<"Second Function : "<<calc(10.5,3.5)<<endl;
	cout<<"Third function : "<<calc(3345.333)<<endl;

*/

	return 0;
}


//double area(int r){
//	return(PI*r*r);
//}


/*int calc(int x)      //function overloading example
{
	return (x*x);
}

float calc(float x, float y)
{
	return ((x*y)+10);
}

double calc(double x)
{
	return (x*PI);
}*/

