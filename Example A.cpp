//Author: Kavan Chandra 100693831
// Date: Feb 25, 2019
// Tutorial 6 Example A

#include<iostream>
#include<iomanip>	

using namespace std;

int main() {

	double s, m, l;
	s = 3.99;
	m = 4.99;
	l = 5.99;

	char cup_size;
	
	cout << "Enter the size of coffee, small, medium or large as s, m, or l respectively" << endl;
	cin >> cup_size;

	switch (cup_size) {

	case 's': cout << "The price of the coffee is " << s << endl; break;
	case 'm': cout << "The price of the coffee is " << m << endl;break;
	case 'l': cout << "The price of the coffee is " << l << endl;break;
	default:cout << "you have not entered a size" << endl;
	}
	system("pause");

	return 0;
	}


