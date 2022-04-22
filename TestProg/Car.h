#pragma once
#include <string>
#include <vector>
#include "Color.h"
class Car
{
private:

	
	std::string mBrand;
	std::string mModel;
	std::string mPlate;
	float mMoneyValue;
	float mKilo;
	float mYear;
	Color mColor;

public:
	Car();
	Car(std::string brand, std::string model, std::string plate, float moneyValue, float kilo, float year, Color color);
	~Car();

	std::string GetBrand();
	std::string GetModel();
	std::string GetPlate();
	float GetMoneyValue();
	float GetKilo();
	float GetYear();
	Color GetColor(int index);

};

