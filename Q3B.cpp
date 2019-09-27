//Author: Kavan Chandra
//Date: February 11, 2019
// Question 3a

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double L, S(3000), I, d(96), c(3);
	double b, h;
	b = 3;
	h = 6;
	I = (b*pow(h, 3)) / 12;


	L = (S*I) / (d*c);

	cout << "The Maximum load is " << L << "lbs" << endl;

	system("pause");



	return 0;
}