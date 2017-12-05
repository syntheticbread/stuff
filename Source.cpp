#include "Employee.h"
#include <cstdlib>
#include <windows.h>
#include "Login.h"


void menu();

void menu() {
	cout << "\t \t \t \t \t \t \t DATA inc. \n";
	cout << "1: CREATE \n";
	cout << "2: SEARCH RECORDS \n";
	cout << "3: EXIT \n";
	
}
int main() {
	int options = 0;
	LOGIN user;
	user.Login_window();
	Sleep(1500);
	system("cls");
	bool active = true;

	while (active) {
		menu();
		cin >> options;
		if (options == 1) {


			INFO option;
			option.Employee();
		
		}

		if (options == 3) {
			cout << "Exiting.....";
			Sleep(2000);
			bool active = false;
			return 0;
		}


		if (options == 2) {
			INFO options2;
			options2.search();
			
		}






	}
}
	


