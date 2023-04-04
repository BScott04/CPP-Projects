/*
 * Class: CMSC140 CRN 30413
 * Instructor: Naegeli, Charles R
 * Project 3
 * Description: Allows the user to get information on rates, income and other information on a hotel
 * Due Date: 4/3/2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Brandon Scott
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){

    //Declare variables
    string location;
    int i, floors, rooms[30], singleRoom[10], doubleRoom[10], king[10], suite[10];

    //Values for each rooms
    int singleRRate = 60, doubleRRate = 75, kingRRate = 100, stroom = 150;
    int unoccupied, min;
    double totalRooms = 0, occupied_rooms = 0, income = 0.0, occupancy_rate;
    int sum = 0;

    cout << fixed << setprecision(2);
    cout << "----------------------------------------------------\n";
    cout << right << setw(30) << "BlueMont Hotel\n";
    cout << "----------------------------------------------------\n";

    //Ask the user where the hotel chain is located.
    cout << "Enter the location of the hotel: ";
    getline (cin,location);

    //Ask the user how many floors are in the hotel
    cout << "Enter the total number of floors of the hotel: ";
    cin >> floors;

    //Ask for the right floor number if it is not between 1 and 5.
    while (floors<=0 || floors>5){
        cout << "The number of floors should be between 1 and 5. Please try again.\n";
        cout << "\nEnter the total number of floors of the hotel: ";
        cin >> floors;
    }

    //Asks the user how many rooms that are on each floor
    for (i = 1; i <= floors; i++){
        cout << "\n\nEnter the total number of rooms in the " << i << "th floor: ";
        cin >> rooms[i];

    //Ask the user for the number opf rooms until within 1 and 30
        while (rooms[i] <= 0 || rooms[i]>30){
            cout << "The number of rooms should be between 1 and 30. Please try again.\n\n";
            cout << "Enter the total number of rooms in the " << i << "th floor : ";
            cin >> rooms[i];
        }

        //Ask the user how many occupied rooms for each room type on this floor
        cout << "How many SINGLE rooms are occupied in the " << i << "th floor : ";
        cin >> singleRoom[i];
        cout << "How many DOUBLE rooms are occupied in the " << i << "th floor : ";
        cin >> doubleRoom[i];
        cout << "How many KING rooms are occupied in the " << i << "th floor : ";
        cin >> king[i];
        cout << "How many SUITE rooms are occupied in the " << i << "th floor : ";
        cin >> suite[i];
        sum = singleRoom[i] + doubleRoom[i] + king[i] + suite[i];

    //Verify that the numbers don't exceed the total of rooms on that floor
        while(sum > rooms[i]){
            cout << "The total number of occupied rooms exceeds the total number of "
            <<"rooms on this floor. Please try again.";
            sum = 0;
            cout << "\n\nEnter the total number of rooms in the " << i << "th floor : ";
            cin >> rooms[i];
            while (rooms[i] <= 0 || rooms[i]>30){
                cout << "The number of rooms should be between 1 and 30. Please try again.\n\n";
                cout << "Enter the total number of rooms in the " << i << "th floor : ";
                cin >> rooms[i];
            }
            cout << "How many SINGLE rooms are occupied in the " << i << "th floor : ";
            cin >> singleRoom[i];
            cout << "How many DOUBLE rooms are occupied in the " << i << "th floor : ";
            cin >> doubleRoom[i];
            cout << "How many KING rooms are occupied in the " << i << "th floor : ";
            cin >> king[i];
            cout << "How many SUITE rooms are occupied in the " << i << "th floor : ";
            cin >> suite[i];
            sum = singleRoom[i] + doubleRoom[i] + king[i] + suite[i];
        }
    }

    //Print the rates of room types
    cout << "\n\n-------------------------------------------------------------------------------\n";
    cout << right << setw(40) << "BlueMont Hotel is located in " << location << endl << endl;
    cout << right << setw(47) << "TODAY'S ROOM RATES<US$/night>" << endl << endl;
    cout << right << setw(20) << "Single Room"<< setw(20) << "Double Room"<<setw(20)
    << "King Room"<< setw(20) << "Suite Room";
    cout << endl<<endl;
    cout << right << setw(20) << singleRRate << setw(20) << doubleRRate << setw(20)
    << kingRRate << setw(20) << stroom;
    cout << "\n-------------------------------------------------------------------------------\n";

    for (i = 1; i <= floors; i++){
        //Calculate the hotel income based on the room type and its rate
        income = income + (singleRoom[i] * singleRRate) + (doubleRoom[i] * doubleRRate) + (king[i] * kingRRate) + (suite[i] * stroom);
        //The total number of rooms
        totalRooms = totalRooms + rooms[i];
        //The total number of occupied rooms
        occupied_rooms = occupied_rooms + singleRoom[i] + doubleRoom[i] + king[i] + suite[i];
    }

    //The total number of unoccupied rooms
    unoccupied = totalRooms - occupied_rooms;
    //The rate of occupancy
    occupancy_rate = (occupied_rooms / totalRooms) * 100;
    //Show the data
    cout << "\n" << right << setw(35) << "Hotel Income: " << right << setw(10) << "$" << income;
    cout << "\n" << right << setw(35) << "Total number of rooms: " << right << setw(10) << totalRooms;
    cout << "\n" << right << setw(35) << "Total number of Occupied Rooms: " << right << setw(10) << occupied_rooms;
    cout << "\n" << right << setw(35) << "Total number of Unoccupied Rooms: " << right << setw(10) << unoccupied;
    cout << "\n" << right << setw(35) << "Occupancy rate: " << right << setw(10) << occupancy_rate << "%";
    //Find the floor with the least rooms
    int r = 1;
    min = rooms[1];
    for (i = 2; i <= floors; i++){
        if (rooms[i] < min){
            min = i;
            r = i;
        }
    }

    //Display floor with the least amount of rooms
    cout << "\n\n" << r << "th Floor with " << rooms[r] << " rooms, has the least # of rooms.";
    //if the occupancy rate is less than 60%, then print a message.
    if (occupancy_rate < 60){
        cout << "\nYou need to improve hotels' occupancy rate.\n\n";
    }

    cout << "\n\nThank you for testing my program!!";
    cout << "\nPROGRAMMER: Brandon Scott";
    cout << "\nCMSC140 Common Project 3";
    cout << "\nDue Date: 4/3/2023\n\n";
    return 0;
}