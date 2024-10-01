#pragma once
#include "addressType.h"
#include "dateType.h"
#include "personType.h"
//#include "extPersonType.h"

class personType
{
public:
	void setFirstName(string fName)
	{
		firstName = fName; //sets the value firstName to fName
	}
	string getFirstName()
	{
		return firstName; //returns the value firstName
	}
	void setLastName(string lName)
	{
		lastName = lName; //sets the value lastName to lName
	}
	string getLastName()
	{
		return lastName; //returns the value lastName
	}
	void print() 
	{
		cout << firstName << " " << lastName << endl; //prints the name
	}
	personType(
		string fName,
		string lName
	) //constructor with parameters
	{
		setFirstName(fName);
		setLastName(lName);
	}
	personType() //default constructor
	{

	}

private:
	string firstName;
	string lastName;

};

