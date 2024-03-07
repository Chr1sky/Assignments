#include <iostream>
#include <ctime>
#include <thread>
#include <chrono>
#include <set>

using namespace std;

int main() {
    cout << " ===== Keno Game =====" << endl;
    srand(time(NULL));
    cout << "The drawn numbers are:" << endl;
    set<int> drawnNumbers;
    
    while (drawnNumbers.size() < 20) {
        this_thread::sleep_for(chrono::seconds(1));
        int number = rand() % 70 + 1;
        
        if (drawnNumbers.find(number) == drawnNumbers.end()) {
            drawnNumbers.insert(number);
            cout << number << "\a" << endl;
        }
    }

    return 0;
}
