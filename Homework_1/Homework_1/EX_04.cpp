#include "EX_04.h"

void EX_04(){
	
	cout "a" << endl;
	//Initialize variable choice
	int choice = 0;
	//loop to go unitl correct number is input
	do{
		//prompt user for number between 1 and 10
		cout << "Please choose a number between 1 and 10: ";
		cin >> choice;
	} while (choice < 1 || choice > 10);
	cout << "Congrats you followed the directions!" << endl;


}
