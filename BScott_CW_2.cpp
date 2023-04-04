/*
 * Class: CMSC140 CRN30413
 * Instructor:Charles Naegeli
 * Classwork2
 * Description: This program displays the following information to the console: My name, my address; house #, street, city, state, and ZIP code, my telephone number, and my college major
 * Due Date: 2/2
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Brandon Scott
*/

#include <iostream>

using namespace std;

int main () {
    // 3.	You must declare your name and major as a constant. Make sure to follow constant conventions.
    const string name = "Brandon Scott";
    const string major = "Computer Science";
    // 4.	You must declare your address and phone number as a variable literal. Make sure to follow variable conventions.
    const string address = "123 Apple St. Candyland, MD 20850";
    const string phoneNumber = "123-456-7890";
    // 2.	You must use only a single cout statement to display all the above information.
    cout << name << endl << address << endl << phoneNumber << endl << major << endl;

    return 0;
}

