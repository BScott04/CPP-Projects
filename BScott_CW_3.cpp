/*
 * Class: CMSC140 CRN30413
 * Instructor:Charles Naegeli
 * Classwork 3
 * Description: This program calculates the total score and the average score for quizzes and classwork completed in my class
 * Due Date: 2/13
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

int main(){
    //Define variables
    string name;
    double avg_score;
    float quiz_score = 0;
    float total = 0;

    //Ask user for name and assignment grades
    cout << "Enter student's name: ";
    getline(cin,name);

    cout << endl << "Enter syllabus quiz score ranging from 0 to 100: ";
    cin >> quiz_score;
    total = total + quiz_score;

    cout << endl << "Enter chapter 1 quiz score ranging from 0 to 100: ";
    cin >> quiz_score;
    total = total + quiz_score;

    cout << endl << "Enter chapter 2 quiz score ranging from 0 to 100: ";
    cin >> quiz_score;
    total = total + quiz_score;

    cout << endl << "Enter programming classwork 1 score ranging from 0 to 100: ";
    cin >> quiz_score;
    total = total + quiz_score;

    cout << endl << "Enter programming classwork 2 score ranging from 0 to 100: ";
    cin >> quiz_score;
    total = total + quiz_score;

    //Calculate and display name, final score and average score
    avg_score = total/5.0;
    cout << endl << name << ": Final Score: " << int (total) << " Average score: " << setprecision(2) << fixed << avg_score;

    return 0;
}