/*
 * Class: CMSC140 CRN 30413
 * Instructor: Naegeli, Charles R
 * Project 2
 * Description: Lets the user convert from Metric to Imperial system
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

//Define variables
string country;
int choice;

int main () {
    //Ask user for country name
    cout << "Enter a country name: ";
    getline (cin,country);

    //Menu
    cout << "\nConverter Toolkit\n";
    cout << "-----------------\n";
    cout << "1. Temperature Converter\n";
    cout << "2. Distance Converter\n";
    cout << "3. Weight Converter\n";
    cout << "4. Quit\n";

    //Ask user for menu choice
    cout << "\nEnter your choice (1-4): ";
    cin >> choice;

    //Switch control structure for choice
    switch (choice) {
        case 1:
            //Define variables
            int celsius;
            int fahrenheit;
            //Ask user for celsius
            cout << "Please enter temperature in Celsius: ";
            cin >> celsius;
            //Calculate and display fahrenheit
            fahrenheit = 1.8 * celsius + 32;
            cout << "It is " << fahrenheit << " in Fahrenheit.\n";
            break;

        case 2:
            //Define variables
            double kilometer;
            double mile;
            //Ask user for kilometer
            cout << "Please enter distance in kilometer: ";
            cin >> kilometer;
            mile = kilometer * 0.6;
            //Display error message if kilometer is less than 0
            if (kilometer < 0) {
                cout << "!!! Program does not convert negative distance !!!\n";
                break;
            }
            else if (kilometer >= 0){
                //Calculate and display mile
                cout << "The distance is " << fixed << setprecision(2) << mile << " in mile.\n";
                break;
            }

        case 3:
            //Define variables
            double kilogram;
            double pound;
            //Ask user for kilogram
            cout << "Please enter weight in kilogram: ";
            cin >> kilogram;
            pound = kilogram * 2.2;
            //Display error message if kilogram is less than 0
            if (kilogram < 0) {
                cout << "!!! Program does not convert negative weight !!!\n";
                break;
            }
            else if (kilometer >= 0){
                //Calculate and display pound
                cout << "The weight is " << fixed << setprecision(1) << pound << " in pound.\n";
                break;
            }

        case 4:
            break;
    }

    //Display ending
    cout << "\n" << country << " sounds fun!\n";
    cout << "\nThank you for testing my program!!\n";
    cout << "PROGRAMMER: Brandon Scott\n";
    cout << "CMSC140 Project 2\n";
    cout << "Due Date: 3/6/2023\n";

}


