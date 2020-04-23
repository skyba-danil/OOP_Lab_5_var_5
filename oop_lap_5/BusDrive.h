#pragma once
#include "CarDrive.h"

class BusDrive : public CarDrive
{
private:
	int pricePerOne;
	int minPeople;
	int currentPeople;
public:
	BusDrive();
	BusDrive(int, string, int, int, int, int);

	int getPricePerOne();
	int getMinPeople();
	int getCurrentPeople();

	void setcurrentPeople(int value);
	void setPricePerOne(int value);
	void setMinPeople(int value);

	//n - number of people
	int PriceOfDrive() override;

	~BusDrive();
};

