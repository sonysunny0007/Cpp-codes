/*
 * selftest.hpp
 *
 *  Created on: Jul. 13, 2024
 *      Author: sony
 */

#ifndef SELFTEST_HPP_
#define SELFTEST_HPP_

#include<iostream>
#include<string>
using namespace std;

class Network{
private:
	string modem_id;
public:
	Network(string id);
//	void setInfo(string id);
	string getInfo();

};

Network::Network(string id){
	modem_id=id;
}

/*void Network::setInfo(string id){
	modem_id=id;
}*/

string Network::getInfo(){
	return modem_id;
}





#endif /* SELFTEST_HPP_ */
