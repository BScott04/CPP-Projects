/*
 * Class: CMSC140 CRN 30413
 * Instructor: Charles Naegeli
 * Project 1
 * Description: A greeting script for a robot that provides games and conversation
 * Due Date: 2/20
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Brandon Scott
*/

//Define headers
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Define constants
const string RobotName = "Computer";
const int DaysOfMonth = 30;
const int GoldfishYear = 5;
const int DogAge = 7;
const string ProgrammerName = "Brandon Scott";
const int AssignmentNumber = 1;
const string DueDate = "2/20/2023";

//Define variables
string VisitorName;
long long int Age;
int num1;
int num2;

//Main function
int main (){
    //Display welcome
    cout << "**************** Robot Prototype Scripting ****************\n" << endl;
    cout << "Hello, welcome to Montgomery College! My name is " << RobotName << ". May I have your name?" << endl;
    //Prompt user to enter VisitorName
    getline (cin,VisitorName);

    //Display game 1 introduction
    cout << "Nice to have you with us today, " << VisitorName << "!" << endl;
    cout << "Let me impress you with a small game." << endl;
    cout << "Give me the age of an important person or a pet to you.\nPlease give me only a number:" << endl;
    //Prompt user to enter Age
    cin >> Age;

    //Display game 1 (Age in different formats)
    cout << endl << "You have entered " << Age << ".\n ";
    cout << "If this is for a person, the age can be expressed as:\n "
    << Age << " years\n or " << Age * 12 << " months\n or about " << Age * 365 << " days\n or about " << Age * DaysOfMonth * 292 << " hours \n or about "
    << Age * DaysOfMonth * 17520 << " minutes\n or about " << Age * DaysOfMonth * 1051200 << " seconds.\n";
    cout << " If this is for a dog, it is " << Age * DogAge << " years old in human age." << endl;
    cout << " If this is for a goldfish, it is " << Age * GoldfishYear << " years old in human age." << endl;

    //Display game 2 introduction
    cout << endl << "Let's play another game, " << VisitorName << ". Give me a whole number.\n";
    //Prompt user to enter num1 and num2
    cin >> num1;
    cout << "Very well. Give me another whole number.\n";
    cin >> num2;
    //Display game 2 (sums of num1+num2 and num1/num2)
    cout << "Using the operator '+' in C++, the result of " << num1 << " + " << num2 << " is " << num1 + num2 << endl;
    cout << "Using the operator '/', the result of " << num1 << " / " << num2 << " is " << num1/num2
    << "\nhowever, the result of " << setprecision(1) << fixed << float(num1) << " / " << setprecision(1) << fixed << float(num2) << " is " << float(num1)/float(num2) << endl;

    //Display ending
    cout << endl << "Thank you for testing my program!!\nPROGRAMMER: " << ProgrammerName << "\nCMSC140 Common Project "
    << AssignmentNumber << "\nDue Date: " << DueDate;

    return 0;
}
