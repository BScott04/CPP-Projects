/*
 * Class:CMSC140 CRN: 30413
 * Instructor:Charles Naegeli
 * Classwork 4, Part 1
 * Description: Calculates the discount on tickets from how many days were sold
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

int main()
{
    //Define variables
	int tickets_sold;
	double total_cost;

    //Ask user for amount of days of tickets sold
	cout << "How many days of tickets were sold?: ";
	cin >> tickets_sold;
	if (tickets_sold <= 0)
	{
        //Error message
		cout << "Invalid Input! Try again with an input greater than 0!" << endl;
		return 0;
	}
	//Calculate total cost
    else{
        if (tickets_sold >= 10){
			total_cost = 109.00 * (1 - .42) * tickets_sold;
		}
        else if (tickets_sold >= 7 && tickets_sold < 10){
			total_cost = 109.00 * (1 - .33) * tickets_sold;
		}
		else if (tickets_sold >= 5 && tickets_sold < 7){
			total_cost = 109.00 * (1 - .25) * tickets_sold;
		}
		else if (tickets_sold >= 3 && tickets_sold < 5){
			total_cost = 109.00 * (1 - .10) * tickets_sold;
		}
		else{
			total_cost = 109.00 * tickets_sold;
		}
        //Display total cost
        cout << endl << "The total cost is equal to $" << fixed << setprecision(2) << total_cost << "." << endl;;
	}

}