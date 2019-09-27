
#include <iostream>
#include<cmath>

using namespace std;

int main() {
	restart:
	//find height of cylinder;

	double s_area, radius, P(3.14), height, top;

		cout << "Enter a surface area";

	cin >> s_area;

	cout << "Enter a radius";

		cin >> radius;
		
		top = (s_area - 2 * P*radius*radius);

			if (top > 0) {
				height = top / (2 * P*radius);
			}
			else {
				cout << "not possible, Enter New Variables";
					system("pause");
				goto restart;

			}

		cout << "THe height of the cyinder is " << height << endl;

		system("pause");







	return 0;
}