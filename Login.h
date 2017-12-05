#pragma once
#include <iostream>
#include <string>
#include <fstream> 
using namespace std;
class LOGIN {
public:
	
	
	bool IslogedIn() {
		string username, password, un, pw;
		cout << "Username:"; cin >> username;
		cout << "Password:"; cin >> password;

		ifstream file("data.txt");
		getline(file, un);
		getline(file, pw);

		if (un == username && pw == password) {
			return true;
		}
		else {
			return false;
		}
	}
	void Login_window() {
		int choice;
		cout << "Register \n";
		cout << "Login \n";
		cin >> choice;

		if (choice == 1) {
			string username, password;
			cout << "Input a username: ";
			cin >> username;
			cout << "Input a password: ";
			cin >> password;


			ofstream file;
			file.open("data.txt");
			file << username << endl;
			file << password << endl;
			file.close();
		}
		if (choice == 2) {
			bool status = IslogedIn();

			if (!status) {
				cout << "Login attempt failed \n";
				Sleep(1000);
				system("cls");
				Login_window();
			}

			else {
				cout << "Login Successful \n";

			}
		}
	}
};