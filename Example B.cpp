//Author: Kavan Chandra 100693831
//Date: Feb 25, 2019
// Tutorial 6 Example B


#include<iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int x;
	double y;
	
	cout << "Enter a value for x" << endl;
	cin >> x;

	if (x <= 0) {
		y = pow(2, -x * 3);
		cout << y << endl;

	}
	else {
		y = log(x) + 10;
		cout << y << endl;
	}

	system("pause");


	return 0;
}