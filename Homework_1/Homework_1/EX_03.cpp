#include "EX_03.h"

void EX_03(){
	cout << "a" << endl;
	// initialize the variable area
	double area = 0;
	string units = "";
	//prompt user for their area
	cout << "What is the area of your square: ";
	cin >> area;
	// prompt user for the units they are using for their area calculations
	cout << "What units are you using for your area: ";
	cin >> units;
	cout << "The diagonal of your square is " << sqrt(2 * area) << " " << units << endl;
	system("pause");

	cout << "b" << endl;
	// initialize variable response
	char response = 'n';
	// ask user a question to prompt an answer
	cout << "Have you ever enjoyed the delight of J. R. R. Tolkien's written works and screen adaptations? (y)es or (n)o" << endl;
	cin >> response;
	tolower(response);
	switch (response) {
	case 'y':
		cout << "yes";
		break;
	case 'n':
		cout << "no... Grumble, Grumble.";
		break;
	default:
		cout << "you have not answered my question properly, therefore no." << endl;
		break;
	}
	system("pause");

	cout << "c" << endl;
	// initialize variable tab
	char tab = '\t';
	cout << tab << "Text" << endl;
	system("pause");

	cout << "d" << endl;
	//initialize string mailingAddress
	string mailingAddress;
	// prompt user for their mailing address
	cout << "What is your mailing address (I'm not being creepy I swear it all clears after you finish the program): ";
	cin.clear();
	cin.ignore();
	getline(cin, mailingAddress);
	system("pause");
	cout << "e" << endl;
	// initialize string variable to a something not empty
	string notEmpty = "Empty";
	cout << notEmpty << endl;
	system("pause");
}
