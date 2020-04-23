#include "CarDrive.h"

CarDrive::CarDrive()
{
	carNumber = 0;
	driverName = "";
	driverAge = 0;
}

CarDrive::CarDrive(int number, string name, int age)
{
	carNumber = number;
	driverName = name;
	driverAge = age;
}

int CarDrive::GetCarNumb()
{
	return carNumber;
}

string CarDrive::GetDriverName()
{
	return driverName;
}

int CarDrive::GetDriverAge()
{
	return driverAge;
}

void CarDrive::SetCarNumb(int numb)
{
	if (numb >= 9999 && numb > 999)
	{
		throw ("Incorrect car number!");
	}
	carNumber = numb;
}

void CarDrive::SetDriveName(string name)
{
	driverName = name;
}

void CarDrive::SetDriverAge(int age)
{
	driverAge = age;
}

int CarDrive::PriceOfDrive()
{
	return 0;
}

CarDrive::~CarDrive()
{
}

ostream& operator<<(ostream& out, const CarDrive& obj)
{
	out << obj.carNumber << ", " << obj.driverName << ", " << obj.driverAge;
	return out;
}

istream& operator>>(istream& in, CarDrive& obj)
{
	cout << "Car number: ";
	in >> obj.carNumber;
	cout << "Driver name: ";
	in >> obj.driverName;
	cout << "Driver age: ";
	in >> obj.driverAge;
	return in;
}