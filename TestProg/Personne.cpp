#include "Personne.h"*
#include <iostream>
#include <string>
using namespace std;

Personne::Personne()
{
	mFirstName = "Default";
	mLastName = "Default";
	mBirthDate = "Default";
	mMoney = 1;
	mCar = false;
	mGender = Gender::Man;
}
Personne::Personne(std::string firstname, std::string lastname, std::string brithdate, float money, bool car, Gender gender)
{
	mFirstName = firstname;
	mLastName = lastname;
	mBirthDate = brithdate;
	mMoney = money;
	mCar = car;
	mGender = gender;
}
Personne::~Personne()
{

}
string Personne::GetFirstName() 
{
	return mFirstName;
}
string Personne::GetLastName()
{
	return mLastName;
}
string Personne::GetBirthDate()
{
	return mBirthDate;
}
float Personne::GetMoney()
{
	return mMoney;
}
bool Personne::GetCar()
{
	return mCar;
}
Gender Personne::GetGender(int index)
{
	return mGender;
}
void Personne::Intro()
{
	cout <<" > " << mFirstName << " " << mLastName << " was born on " << mBirthDate << " and is a man \n";
	cout << " > " << mFirstName << " has " << mMoney << " Euro and no car \n";
}





