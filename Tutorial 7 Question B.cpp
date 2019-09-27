//Author: Kavan Chandra
//Date: March 4, 2019
// Tutorial 7 Question B

#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int prime(1), num,x(2),r;
	bool p = true;
	cout << "Insert a number to get the prime numbers" << endl;
	cin >> num;
	cout << "The prime numbers are: " << endl;
	for (prime = 1; prime <= num; ++prime) {

		for (x = 2; x < prime; x++) {
			r = prime % x;

			if (r == 0) {
				p = false;
			}
		
		}
		if (p) {
			cout << prime << endl;
		
		}
		p = true;
	}


	system("pause");

	return 0;
}
