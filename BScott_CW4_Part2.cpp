/*
 * Class:CMSC140 CRN: 30413
 * Instructor:Charles Naegeli
 * Classwork 4, Part 2
 * Description: Determines the price for a custom shop sign by the number of colors in the sign, if the sign will have lighting, and if an old sign must be removed
 * Due Date: 3/6/2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Brandon Scott
*/
//Define headers
#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	//Define colors
    int colors;
	//Ask user how many colors
    cout << "Enter the number of colors in the sign: ";
	cin >> colors;

    //Determine price and extra options
	if (colors > 0) {
		char lightedSign;
		cout << "Do you want a lighted sign(y/n)? ";
		cin >> lightedSign;

		char oldSign;
		cout << "Do you need an old sign removed(y/n)? ";
		cin >> oldSign;

		int basePrice = 0;
		switch (colors) {
		case 1:
			basePrice = 250;
			break;
		case 2:
			basePrice = 325;
			break;
		case 3:
			basePrice = 450;
			break;
		case 4:
			basePrice = 625;
			break;
		default:
			basePrice = 850;
			break;
		}

		double addedPrice = 0;
		if (lightedSign == 'y') {
			addedPrice += basePrice * 0.25;
		}

		if (oldSign == 'y') {
			addedPrice += basePrice * 0.1;
		}

		double total = basePrice + addedPrice;

        //Display output
		cout << setprecision(2) << fixed << showpoint << "The price is: $" << total << endl;
	}
	else {

        //Error message
        cout << "Invalid number of colors! Number must be greater than zero!" << endl;
	}
}
