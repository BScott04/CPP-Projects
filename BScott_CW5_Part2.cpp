/*
 * Class: CMSC140 CRN 30413
 * Instructor: Charles Naegeli
 * Classwork 5 Part 2
 * Description: Writes the users information to a file
 * Due Date: 4/3/2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Brandon Scott
*/

#include <iostream>
#include <fstream>


using namespace std;

int main(){

    string name,number,address1,address2;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Enter your phone number: ";
    cin>>number;
    cout<<"Enter your street address: ";
    cin.ignore();
    getline(cin,address1);
    cout<<"Enter the user's city, state, and zip code: ";
    getline(cin,address2);

    ofstream file;
    file.open("/Users/brandonscott/Desktop/C++/CW5/list.txt");
    file<<"Name: "<<name<<endl;
    file<<"Phone Number: "<<number<<endl;
    file<<"Address: "<<address1<<endl;
    file<<" "<<address2<<endl;
    file.close();

    cout<<"\n";

    ifstream File("/Users/brandonscott/Desktop/C++/CW5/list.txt");
    getline(File,name);
    getline(File,number);
    getline(File,address1);
    getline(File,address2);
    File.close();
    cout<<name<<endl;
    cout<<number<<endl;
    cout<<address1<<endl;
    cout<<address2<<endl;

return 0;
}

