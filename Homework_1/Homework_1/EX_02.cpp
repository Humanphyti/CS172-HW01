#include "EX_02.h"

void EX_02(){

		cout << "a" << endl;
		//initialize variable hasPassedTest to true
		bool hasPassedTest = true;
		cout << hasPassedTest << endl;
		system("pause");

		cout << "b" << endl;
		//initialize the random number generator
		srand(time(NULL));
		//initializes integers x and y to pseudo-random numbers
		int x = rand(), y = rand();
		//determines whether x is bigger, smaller, or equal to y
		if (x > y) {
			cout << x << " is larger than " << y << endl;
		}
		else if (x < y) {
			cout << x << " is less than " << y << endl;
		}
		else {
			cout << x << " and " << y << " are equal." << endl;
		}
		system("pause");

		cout << "c" << endl;
		//initializes numberOfShares
		int numberOfShares = 0;
		//prompts user for a value
		cout << "How many shares do you have: ";
		//store entered value into numberOfShares
		cin >> numberOfShares;
		//function checks to see if numberOfShares is less than 100
		if (numberOfShares < 100) {
			cout << "number of shares is less than 100." << endl;
		}
		system("pause");

		cout << "d" << endl;
		//initialize boxWidth and bookWidth
		int bookWidth = 0, boxWidth = 0;
		//prompt user for boxWidth
		cout << "How wide is your box: ";
		cin >> boxWidth;
		//prompt user for bookWidth
		cout << "How wide is your book: ";
		cin >> bookWidth;
		//check to see if it divides evenly
		if ((boxWidth % bookWidth) == 0) {
			cout << "The book will be a perfect fit width wise." << endl;
		}
		else {
			cout << "The book will not be a perfect fit width wise." << endl;
		}
		system("pause");

		cout << "e" << endl;
		//initialize variables shelfLife and outTemp
		int shelfLife = 0, outTemp = 0;
		//prompt user for shelfLife
		cout << "What is the shelf life, in days, of your chocolate: ";
		cin >> shelfLife;
		//prompt user for outTemp
		cout << "What is the outside temperature in degrees farenheit: ";
		cin >> outTemp;
		//check to see if outTemp is larger 90
		if (outTemp > 90) {
			//subtract 4 from shelfLife if outTemp is larger than 90
			cout << (shelfLife - 4) << " days is the current shelf life of your chocolate." << endl;
		}
		else {
			cout << shelfLife << " days is the current shelf life of your chocolate." << endl;
		}
		system("pause");
}
