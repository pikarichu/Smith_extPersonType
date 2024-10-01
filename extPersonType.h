#pragma once
#include "addressType.h"
#include "dateType.h"
#include "personType.h"

class extPersonType : public personType 
{
public:
	void setPhoneNumber(string pnum)
	{
		phoneNumber = pnum; //sets the phone number to the value given
	}
	string getPhoneNumber()
	{
		return phoneNumber; //returns the value phoneNumber
	}
	void setRelationship(string rship)
	{
		if (rship == "Family" || rship == "Friend" || rship == "Business") 
		{
			relationship = rship; //if the relationship is Family, Friend or Business, it sets it
		}
		else
		{
			relationship = ""; //else it sets it to nothing
		}
	}
	string getRelationship()
	{
		return relationship; //returns the value relationship
	}
	int getBirthMonth()
	{
		return birthdate.getMonth(); //returns the birth month value
	}
	void print() //prints all the info about the person
	{
		cout << getFirstName() << " " << getLastName() << endl;
		birthdate.print();
		address.print();
		cout << getPhoneNumber() << endl;
		cout << getRelationship() << endl;
	}
	extPersonType() //default constructor
	{

	}
	extPersonType(
		string fName,
		string lName,
		int bMonth,
		int bDay,
		int bYear,
		string street,
		string city,
		string state,
		int zip,
		string phoneNumber,
		string relationship
	)  //constructor with parameters
	{
		setFirstName(fName);
		setLastName(lName);
		birthdate.setDate(bMonth, bDay, bYear);
		address.setAddress(street);
		address.setCity(city);
		address.setState(state);
		address.setZipcode(zip);
		setPhoneNumber(phoneNumber);
		setRelationship(relationship);
	}

private:
	addressType address;
	dateType birthdate;
	string phoneNumber;
	string relationship;
};

