//============================================================================
// Name        : 0.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Encapsulation is one of the fundamental principles of Object-Oriented Programming (OOP). It is the concept of bundling data (attributes) and the methods (functions) that operate on the data into a single unit or class, and restricting direct access to some of the object's components.
// This is typically done by using private and public access modifiers.
//============================================================================

#include <iostream>
using namespace std;

class Account{
private:
	//private data members
	string owner;
	double balance;

public:
	// Constructor to initialize the account
	Account(string owner, double balance){
		this->owner=owner;
		this->balance=balance;
	}

	// Getter for 'owner'
	string getOwner(){
		return owner;
	}

	//Getter for balance
	double getBalance(){
		return balance;
	}

	//setter for 'balance' to ensure it's updated safely
	void deposit(double amount) {
	        if (amount > 0) {
	            balance += amount;
	            cout << "$" << amount << " deposited." << endl;
	        } else {
	            cout << "Invalid deposit amount." << endl;
	        }
	    }

	// Setter for 'balance' to ensure it's updated safely
	    void withdraw(double amount) {
	        if (amount > 0 && amount <= balance) {
	            balance -= amount;
	            cout << "$" << amount << " withdrawn." << endl;
	        } else {
	            cout << "Invalid withdrawal amount or insufficient balance." << endl;
	        }
	    }
};





int main() {

	Account myAccount("Sony Sunny", 10000);

	cout << "Account Owner: " << myAccount.getOwner() << endl;
	cout << "Account Balance: " << myAccount.getBalance() << endl;

	myAccount.deposit(100000);

	myAccount.withdraw(500);

	cout << "Final balance: $" << myAccount.getBalance() << endl;
	return 0;
}
