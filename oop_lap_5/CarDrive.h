#pragma once
#include <iostream>

using namespace std;

class CarDrive
{
private:
	int carNumber;
	string driverName;
	int driverAge;
public:
	CarDrive();
	CarDrive(int, string, int);
	friend ostream& operator<<(ostream& out, const CarDrive&);
	friend istream& operator>>(istream& in, CarDrive&);

	int GetCarNumb();
	string GetDriverName();
	int GetDriverAge();

	void SetCarNumb(int numb);
	void SetDriveName(string name);
	void SetDriverAge(int age);

	virtual int PriceOfDrive();

	~CarDrive();
};