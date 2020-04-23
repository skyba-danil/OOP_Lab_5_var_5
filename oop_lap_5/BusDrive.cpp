#include "BusDrive.h"

BusDrive::BusDrive()
{
	pricePerOne = 0;
	minPeople = 0;
	currentPeople = 0;
}

BusDrive::BusDrive(int numb, string name, int age, int price, int people, int peopleNow) : CarDrive(numb, name, age)
{
	pricePerOne = price;
	minPeople = people;
	currentPeople = peopleNow;
}

int BusDrive::getPricePerOne()
{
	return pricePerOne;
}

int BusDrive::getMinPeople()
{
	return minPeople;
}

int BusDrive::getCurrentPeople()
{
	return currentPeople;
}

void BusDrive::setcurrentPeople(int value)
{
	currentPeople = value;
}

void BusDrive::setPricePerOne(int value)
{
	if (value < 0)
	{
		throw ("incorrect value of pricePerOne ");
	}
	pricePerOne = value;
}

void BusDrive::setMinPeople(int value)
{
	if (value < 0)
	{
		throw ("incorrect value of people number");
	}
	minPeople = value;
}

int BusDrive::PriceOfDrive()
{
	if (currentPeople < minPeople)
	{
		return 0;
	}
	return pricePerOne * currentPeople;
}

BusDrive::~BusDrive()
{
}
