#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int num = rand() % 100 + 1;
    int guess;
    cout << "Welcome to the Number Guessing game!" << endl;
    cout << "I am thinking of a number between 1 and 100." << endl;
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess<num) {
            cout << "Too low! Try again." << endl;
        }
        else if (guess>num) {
            cout << "Too high! Try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the correct number!" << endl;
        }
    } while (guess!=num);
    return 0;
}
