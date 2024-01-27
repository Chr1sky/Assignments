//Read from Notebook Entry file
#include <iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

string Fname, Lname;
int phoneNumber;

int main() {

    fstream file;
    file.open("wizytowka.txt", ios::in);

    if(file.good()==false){
        cout << "Plik nie istnieje";
        exit(0);
    }

    string line;
    int number_line=1;
    while(getline(file, line)){
        switch(number_line){
            case 1: Fname= line;break;
            case 2: phoneNumber = atoi(line.c_str()); break;
        }

        number_line++;
    }


    file.close();
    cout << Fname << " " << Lname << endl;
    cout << phoneNumber << endl;
    
    return 0;
}