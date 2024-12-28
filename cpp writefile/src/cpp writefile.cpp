//============================================================================
// Name        : cpp.cpp
// Author      : Sony Sunny
// Version     :
// Copyright   : Your copyright notice
// Description : Write files example
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

/* ofstream is used to write the contents into the file.
 * ifstream is used to read the contents from the file.
 * fstream is used to write and read the contents to and from the files.
 */

int main() {

	ofstream myFile("Mind.txt");
	if (myFile.is_open()){
		myFile<<"I am C++\n";
		myFile<<"I like c++\n";
		myFile.close();
	}
	else{
		cout<<"Unable to open the file\n";
	}
	cout << "File program" << endl; // prints !!!Hello World!!!
	return 0;
}
