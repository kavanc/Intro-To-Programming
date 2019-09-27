
//Author: Kavan Chandra
//Date: February 4, 2019

#include<iostream>
#include <cmath>
#include<iomanip>


using namespace std;

int main() {




	double coffee, doughnut, subtotal, tax(1.13), total;
	cout << "How many coffees would you like to buy?" << endl;
	cin >> coffee;
	cout << "How many doughnuts would you like to buy?" << endl;
	cin >> doughnut;
	cout << endl;
	cout << endl;

	double price_d, price_c;
	price_c = coffee * 4.99;
	price_d = doughnut * 1.99;

	cout << "Jim Hortons" << left << endl;
	cout << endl;
	cout << "Customer Receipt" << left << endl;
	cout << "-------------------";
	cout << endl;

	cout << "Coffee";
	cout << setw(8) << right << coffee;
	cout << setw(10) << right << price_c << endl;
	cout << endl;


	cout << "Doughnuts";
	cout << setw(5) << right << doughnut;
	cout << setw(10) << right << price_d << endl;
	cout << endl;
	cout << endl;

	subtotal = price_c + price_d;
	cout <<"Subtotal";
	cout << setw(16) << right << subtotal << endl;
	cout << endl;

	cout << "HST Tax";
	cout << setw(17) << right << subtotal * 0.13 << endl;
	cout << endl;
	


	total = subtotal * tax;
	cout << "Total";
	cout << setw(19) << right << total << endl;
	cout << endl;

	



		system("pause");





	return 0;
}

