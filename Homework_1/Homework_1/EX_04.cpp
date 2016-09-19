#include "EX_04.h"

void EX_04(){
	
	cout << "a" << endl;
	//Initialize variable choice
	int choice = 0;
	//loop to go unitl correct number is input
	do{
		//prompt user for number between 1 and 10
		cout << "Please choose a number between 1 and 10: ";
		cin >> choice;
	} while (choice < 1 || choice > 10);
	cout << "Congrats you followed the directions!" << endl;

	cout << "b" << endl;
	// loop to compute cubes
	int i = 0;
	for (i = 0; i < choice; i++) {
		int cubes = pow(i, 3);
		cout << cubes << endl;
	}
	do {
		cout << "*";
	} while (i < choice);

	for (int n = 0; n <= 40; n++) {
		if (n % 2 == 0) {
			cout << n;
		}
	}
	EX_04_2X(choice);
}

int EX_04_2X()
{
	
	return 0;
}

