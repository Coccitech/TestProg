#pragma once
#include <string>
#include "Gender.h"

class Personne
{
private:

	//fist name
	std::string mFirstName;
	//lastname
	std::string mLastName;
	//birth date
	std::string mBirthDate;
	//money
	float mMoney;
	//car
	bool mCar;
	//gender 
	Gender mGender;

public:
	Personne();
	Personne(std::string firstname, std::string lastname, std::string brithdate, float money,bool car,Gender gender);
	~Personne();

	std::string GetFirstName();
	std::string GetLastName();
	std::string GetBirthDate();
	float GetMoney();
	bool GetCar();
	Gender GetGender(int index);
	void Intro();

};

