#include <iostream>
#include<fstream>

using namespace std;

string Fname, Lname;
int phoneNumber;

int main() {
    
    cout << "Name: "; cin >> Fname;
    cout << "Last Name: "; cin >> Lname;
    cout << "Phone Number: "; cin >> phoneNumber;

    fstream file;
    file.open("BusinessCard.txt", ios::out | ios::app);

    file << Fname << " " << Lname << endl;
    file << phoneNumber << endl;

    file.close();
    
    return 0;
}
