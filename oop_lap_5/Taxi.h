#pragma once
#include "CarDrive.h"

class Taxi : public CarDrive
{
private:
	int callPrice = 0;
	int priceOneKm = 0;
	int kmNumb = 0;
public:
	Taxi();
	Taxi(int, string, int, int, int, int);

	//n - km number
	int PriceOfDrive() override;

	int GetCallPrice();
	int GetPriceOneKm();
	int GetKmNumb();

	void SetKmNumb(int value);
	void SetCallPrice(int callprice);
	void SetPriceOneKm(int price1);
	~Taxi();
};