#include "Taxi.h"

Taxi::Taxi() : CarDrive() {}

Taxi::Taxi(int numb, string name, int age, int callPrice, int price1, int kmnumb) : CarDrive(numb, name, age)
{
	this->callPrice = callPrice;
	this->priceOneKm = price1;
	this->kmNumb = kmnumb;
}

int Taxi::PriceOfDrive()
{
	return callPrice + kmNumb * priceOneKm;
}

int Taxi::GetCallPrice()
{
	return callPrice;
}

int Taxi::GetPriceOneKm()
{
	return priceOneKm;
}

int Taxi::GetKmNumb()
{
	return kmNumb;
}

void Taxi::SetKmNumb(int value)
{
	kmNumb = value;
}

void Taxi::SetCallPrice(int callprice)
{
	callPrice = callPrice;
}

void Taxi::SetPriceOneKm(int price1)
{
	priceOneKm = price1;
}

Taxi::~Taxi()
{
}
