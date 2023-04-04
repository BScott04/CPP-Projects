/*
 * Class: CMSC140 CRN 30413
 * Instructor: Charles Naegeli
 * Classwork 5 Part 1
 * Description: Displays an array of "*"s
 * Due Date: 4/3/2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Brandon Scott
*/

#include <iostream>

using namespace std;


int main()
{
    int num = 10;  // total asterisks
	int count = 1;

	cout << "(i)" << endl;
	while (count <= num)
	{
		cout << "*";
		count += 1;
	}

	cout << endl;
	cout << "ii" << endl;

    num = 20;
	count = 1;
	do{
        cout << "*";
		count += 1;
    } while (count <= num);

    cout << endl;
    cout << "(iii)" << endl;;

    int lineNumber ;
    count = 1;

    for (lineNumber = 1; lineNumber <= 10; lineNumber++){
		 for (count = 1; count <= lineNumber; count++){
             cout << "*";
         }
		 cout << endl;
    }
    cout << endl;
    cout << "(iv)" << endl;;
    lineNumber;
    count = 1;

    for (lineNumber = 1; lineNumber <= 20; lineNumber++){
		 for (count = 1; count <= lineNumber; count++){
             cout << "*";
         }
		 cout << endl;
    }

    cout << endl;
    cout << "(v)" << endl;;

    for (lineNumber = 10; lineNumber >= 1; lineNumber--){
		 for (count = 1; count <= lineNumber; count++){
             cout << "*";
         }
		 cout << endl;
    }

    cout << endl;
    cout << "(vi)" << endl;;

    for (lineNumber = 20; lineNumber >= 1; lineNumber--){
		 for (count = 1; count <= lineNumber; count++){
             cout << "*";
         }
		 cout << endl;
    }

    return 0;
}