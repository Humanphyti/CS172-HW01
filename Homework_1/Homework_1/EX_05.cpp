#include "EX_05.h"

void EX_05() {

	cout << "a" << endl;
	//initialize array userInts
	int userInts[5] = { 0, 0, 0, 0, 0 };
	// loop to enter and store values to the array 
	for (int i = 0; i < 5; i++)
	{
		cin >> userInts[i];
	}
	system("pause");

	cout << "b" << endl;
	// initialize summation and product 
	int sum = 0;
	int multiply = 1;
	// loop to get add and multiply
	for (int n = 0; n < 5; n++) {
		sum += userInts[n];
		multiply *= userInts[n];
	}
	cout << sum << endl;
	cout << multiply << endl;
	system("pause");

	cout << "c" << endl;
	arrayOutput();
	system("pause");

	cout << "d" << endl;
	arrayGuess();
	system("pause");

}

void arrayOutput() {
	int userInts[5] = { 1, 2, 3, 4, 5 };
	// loop to output the contents of the array userInts
	for (int i = 0; i < 5; i++) {
		cout << userInts[i] << ", ";
	}
}

void arrayGuess() {
	//initialize the variables and array
	int guess = 0;
	int masterArray[10] = { 30, 75, 88, 11, 22, 33, 44, 55, 66, 77 };
	bool correctGuess = false;
	//loop to recur input if their input is incorrect
	do {
		//prompt user for their guess
		cout << "I have an array with me and it has numbers between 1 and 100 what do you guess " << endl;
		cout << "one of the numbers is: ";
		cin >> guess;
		for (int i = 0; i <= 10; i++) {
				if (masterArray[i] == guess) {
					correctGuess = true;
					cout << "Congratulations! You beat the unfavorable odds and guessed correctly!" << endl;
				}
		}
	} while (correctGuess == false);
}
