#include<iostream>
#include<string>

using namespace std;

int main() {
	string message, encrypted, decrypted, crypt, cont;
	char first;
	 

Top:

	cout << "Please enter your selection" << endl;
	cout << "    1. Encrypt " << endl;
	cout << "    2. Decrypt " << endl;
	getline(std::cin, crypt);
	if (crypt == "1") {
		cout << "Enter message to Encrypt" << endl;
		getline(std::cin, message);
		
		for (int j = 0; j < message.length();j++) {
			first= message.at(j);
			encrypted = (first - 65 + 5) % 26 + 65;
			cout << encrypted;

		}
		cout << "  " << endl;
	}
	else if (crypt == "2") {
		cout << "Enter message to Decrypt" << endl;
		getline(std::cin, message);
		
		for (int j = 0; j < message.length();j++) {
			first = message.at(j);
			decrypted = (first + 'A'- 5) %26 + 'A';
			cout << decrypted;
		}
		cout << "  " << endl;
	}

	else {
		goto Top;
	}
	cout << "Would you like to continue or exit? C or E" << endl;
	getline(std::cin, cont);
	
	if(cont=="C") {
		goto Top;

	}
	

	system("pause");
	return 0;
}