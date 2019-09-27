// Author: Kavan Chandra
// Date: March 4, 2019
//Tutorial 7 Question C


#include<iostream>
#include<cmath>

using namespace std;
int main() {
	double toon(2), loon(1), quart(0.25), dime(0.1), nick(0.05), pen(0.01), total;

	cout << "Change required: " << endl;
	cin >> total;

	top:
	if (total - toon >= 0) {
		total = total - toon;
		cout << "1 toonie" << endl;
		goto top;
	}

	if (total - loon >= 0) {
		total = total - loon;
		cout << "1 loonie" << endl;
		goto top;
	}

	if (total - quart >= 0) {
		total = total - quart;
		cout << "1 quarter" << endl;
		goto top;
	}

	if (total - dime >= 0) {
		total = total - dime;
		cout << "1 dime" << endl;
		goto top;

	}if (total - nick >= 0) {
		total = total - nick;
		cout << "1 nickel" << endl;
		goto top;
	}
	if (total - pen >= 0) {
		total = total - pen;
		cout << "1 penny" << endl;
		goto top;
	}
	if (total = 0) {
		cout << "No more change" << endl;
	}
	system("pause");

}