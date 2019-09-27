//Author: Kavan Chandra
//Date: February 11, 2019
// Question 3a

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double L, S(3000), I, d(96), c(2);
	double b, h;
	b = 2;
	h = 4;
	I = (b*pow(h, 3)) / 12;


	L = (S*I) / (d*c);

	cout << "The Maximum load is " << L << "lbs" << endl;

	system("pause");



	return 0;
}