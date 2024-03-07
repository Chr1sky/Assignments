#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int number, choice;
int attempts = 0;

int main() {

    cout << "I have randomly chosen a number for you from 20 to 50. Can you guess what the number is?";
    srand(time(NULL));
    number = rand() % 31 + 20;
    cout << endl;
    while(choice != number){
        cout << "Enter your number: ";
        cin >> choice;
        attempts++;
        cout << "This is your "<< attempts << " attempt" << endl;
        if(choice == number){
            cout << "You guessed it!" << endl;
        } else if (choice > number){
            cout << "You entered a number that's too large."<< endl;
        } else if (choice < number){
            cout << "You entered a number that's too small."<< endl;
        }
    }
    cout << "Congratulations! You succeeded in " << attempts << " attempts.";

    return 0;
}
