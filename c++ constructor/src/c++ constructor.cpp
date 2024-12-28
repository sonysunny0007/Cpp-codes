//============================================================================
// Name        : c++.cpp
// Author      : Sony Sunny
// Version     :
// Copyright   : Your copyright notice
// Description : constructor example
//============================================================================

#include <iostream>
#include<string>
using namespace std;

struct MODEM{
	int status;
	string data;
};

class network
{
public:
	int modemstatus;
	bool getmodemresponse();

	network(){ //constuctor
		modemstatus=getmodemresponse();
		if(modemstatus==1)
			cout<<"Yes, modem is avaiable"<<endl;
		else
			cout<<"No, modem is unvailable"<<endl;
		}

private:
	MODEM ismodemavailable();

};

bool network::getmodemresponse(){
	MODEM res = ismodemavailable();
	return (res.status);
}

MODEM network::ismodemavailable(){
	MODEM res;
	res.status=0;
	res.data="OK";
	return(res);
}


int main() {
	network modem;
	return 0;
}
