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
	system("pause");

	cout << "b" << endl;
	// loop to compute cubes
	int i = 0;
	for (i = 0; i <= choice; i++) {
		int cubes = pow(i, 3);
		cout << cubes << endl;
	}
	system("pause");

	cout << "c" << endl;
	// do-while loop to output a line of asterisks
	i = 0;
	do {
		cout << "*";
		i++;
	} while (i < choice);
    cout << endl;

	cout << "d" << endl;
	//for loop to determine the even numbers between 0 and 40
	for (int n = 0; n <= 40; n++) {
		if (n % 2 == 0) {
			cout << n << " ";
		}
	}
	system("pause");

	cout << "e" << endl;
	//doubling function
	int doubleChoice = 0;
	doubleChoice = EX_04_02(choice);
	cout << doubleChoice << endl;
	system("pause");

	cout << "f" << endl;
	//storage variable for the result
	int z = 0;
	//adding function
	z = EX_04_add(rand(), rand());
	cout << z << endl;
	system("pause");

	cout << "g" << endl;
	int funNumbers = rand();
	EX_04_addOne(funNumbers);
	cout << funNumbers << endl;
	system("pause");

}

int EX_04_02(int choice){
	int doubleChoice;
	doubleChoice = 2 * choice;
	return doubleChoice;
}

int EX_04_add(int num1, int num2)
{
	int sum;
	sum = num1 + num2;
	return sum;
}

void EX_04_addOne(int & origin)
{
	origin += 1;
}

