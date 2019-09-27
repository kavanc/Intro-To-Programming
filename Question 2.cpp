//Author: Kavan Chandra
//100693831
//Date: Feb 11, 2019


#include<iostream>	
#include<cmath>

using namespace std;

int main() {

	int sum, n, a, d;
	
	cout << "Enter n, a, and d values to find the sum of the integers between two numbers " << endl;
	 
	cout << "Enter a d value:";
	cin >> d;

	cout << "Enter an n value: ";
	cin >> n;

	cout << "Enter an a value: ";
	cin >> a;

	sum = (n / 2)*(2 * a + (n - 1)*d);
	cout << sum << endl;

	system("pause");
		



	return 0;
}


