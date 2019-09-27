//Author: Kavan Chandra
// Date: March 4th, 2019 
//Tutorial 7 Question A 

#include<iostream>
#include <cmath>

using namespace std;

int main() {
	int grade, num_of_grades, max, min;
	cout << "Insert the number of grades being inputted" << endl;
	cin >> num_of_grades;
	
	A:

	cout << "Insert grade" << endl;
	cin >> grade;
	if (grade > 100) {
		cout << "Invalid grade" << endl;
		goto A;
	}
	if (grade < -1) {
		cout << "Invalid Grade" << endl;
		goto A;
	}

	min = grade;
	max = grade;
	
	double average;
	int sum(0);
	while (grade >= 0) {
		
		sum = sum + grade;
		if (grade < min) {
		min=grade;
		}
		if (grade > max) {
			max=grade;
		}

		B:
		cout << "Insert grade" << endl;
		cin >> grade;

		if (grade > 100) {
			cout << "Invalid grade" << endl;
			goto B;
		}
		if (grade < -1) {
			cout << "Invalid Grade" << endl;
			goto B;
		}
		

	}


		average = (double)sum / (double)num_of_grades;
		cout << "The average is: " << average << endl;
		cout << "The max is:" << max << endl;
		cout << "The min is:" << min << endl;


	
	

	system("pause");


	return 0;
}