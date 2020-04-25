#include <iostream>
#include "BusDrive.h"
#include "Taxi.h"

#define MAXN 3

using namespace std;

void setInfo(CarDrive**);
void sort(CarDrive** drive);
void printInf(CarDrive** drive);
int getSumPrice(CarDrive** obj);

int main()
{
	CarDrive *drive[MAXN];
	setInfo(drive);
	printInf(drive);
	cout << "\nSort inf\n";
	sort(drive);
	printInf(drive);
	cout << "The most profitable drive is: " << drive[MAXN - 1] << endl;;
	cout << "Sum price is: " << getSumPrice(drive);
}

int getSumPrice(CarDrive** obj)
{
	int sum;
	for (int i = 0; i < MAXN; i++)
	{
		sum += obj[i]->PriceOfDrive();
	}
	return sum;
}

void printInf(CarDrive** drive)
{
	for (int i = 0; i < MAXN; i++)
	{
		cout << *drive[i] << ", Price: " << drive[i]->PriceOfDrive() << endl;
	}
}
	
void sort(CarDrive** drive)
{
	for (int i = 0; i < MAXN - 1; ++i)
	{
		int min = i;
		for (int j = i + 1; j < MAXN; ++j)
		{
			if (drive[j]->PriceOfDrive() < drive[min]->PriceOfDrive())
				min = j;
		}
		swap(drive[i], drive[min]);
	}
}


void setInfo(CarDrive** obj)
{
	int transport;
	for (int i = 0; i < MAXN; i++)
	{
		cout << "Choose transport(press 1 or 2):\n"
			<< "1. Taxi" << endl
			<< "2. Bus" << endl;
		cin >> transport;
		int numb;
		string name;
		int age;
		switch (transport)
		{
		case 1:
			int callprice;
			int onekm;
			int km;
			cout << "Car number: ";
			cin >> numb;
			cout << "Driver name: ";
			cin >> name;
			cout << "Driver age: ";
			cin >> age;
			cout << "Price of call: ";
			cin >> callprice;
			cout << "Price for one km: ";
			cin >> onekm;
			cout << "How meny km: ";
			cin >> km;
			obj[i] = new Taxi(numb, name, age, callprice, onekm, km);
			break;
		case 2:
			int pr;
			int min;
			int people;
			cout << "Car number: ";
			cin >> numb;
			cout << "Driver name: ";
			cin >> name;
			cout << "Driver age: ";
			cin >> age;
			cout << "Price for one persone: ";
			cin >> pr;
			cout << "Min people: ";
			cin >> min;
			cout << "Now people number: ";
			cin >> people;
			obj[i] = new BusDrive(numb, name, age, pr, min, people);
			break;
		default:
			cout << "incorrect transport!";
			exit(-1);
			break;
		}
	}
}