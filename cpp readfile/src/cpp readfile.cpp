//============================================================================
// Name        : cpp.cpp
// Author      : Sony Sunny
// Version     :
// Copyright   : Your copyright notice
// Description : Files read file example
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;



int main() {

	string line;
	ifstream myFile("Mind.txt");
	if(myFile.is_open()){
		while(getline(myFile,line)){
			cout<<line<<"\n";
		}
		myFile.close();
	}
	else cout<<"Unable to open the file\n";


	cout << "Read file program" << endl; // prints !!!Hello World!!!
	return 0;
}
