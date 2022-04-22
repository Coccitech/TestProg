#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

Car::Car()
{
	mBrand = "Default";
	mModel = "Default";
	mPlate = "Default";
	mMoneyValue = 1;
	mKilo = 1;
	mYear = 1;
	mColor = Color::Man;
}
Car::Car(std::string firstname, std::string lastname, std::string brithdate, float money, bool car, Gender gender)
{
	mFirstName = firstname;
	mLastName = lastname;
	mBirthDate = brithdate;
	mMoney = money;
	mCar = car;
	mGender = gender;
}
Car::~Car()
{

}
string Car::GetFirstName()
{
	return mFirstName;
}
string Car::GetLastName()
{
	return mLastName;
}
string Car::GetBirthDate()
{
	return mBirthDate;
}
float Car::GetMoney()
{
	return mMoney;
}
bool Car::GetCar()
{
	return mCar;
}
Gender Car::GetGender(int index)
{
	return mGender;
}
void Car::Intro()
{
	cout << " > " << mFirstName << " " << mLastName << " was born on " << mBirthDate << " and is a man \n";
	cout << " > " << mFirstName << " has " << mMoney << " Euro and no car \n";
}
