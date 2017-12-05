#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
using namespace std;


class INFO {
	public:
		string Name;
		string Adress;
		int ID, Age, Salary;
		
		void Employee() {
			
			cin.ignore();
			cout << "Please enter employee name \n";
			getline(cin, Name);



			cout << "please enter employee address \n";
			getline(cin, Adress);


			cout << "Please enter employee age \n";
			cin >> Age;

			cout << "Please enter employee salary \n";
			cin >> Salary;

			cout << "Please enter employee Id \n";
			cin >> ID;


			ofstream myfile;
			myfile.open("Employee Data.txt", ios::out | ios::app);
			myfile << "Name: " << Name << endl;
			myfile << "Age: " << Age << endl;
			myfile << "Address: " << Adress << endl;
			myfile << "Salary: " << Salary << endl;
			myfile << "ID: " << ID << endl;
			myfile << endl;
			myfile.close();
		}
			
		void search() {
			string   line;
			ifstream file("Employee Data.txt");
			while (getline(file, line))
			{
				cout << line << "\n";
				}
			
		}
};
