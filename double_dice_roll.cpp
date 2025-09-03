#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    char user_input;
    int chances = 0;

    while (true) {

        do {
            cout << "******************\n";
            cout << "Enter 'D' to roll the dice, 'Q' to quit: ";
            cin >> user_input;
        } while (user_input != 'D' && user_input != 'Q');

        if (user_input == 'Q') {
            cout << "Bye Bye! \n";
            cout << "Total chances rolled: " << chances << endl;
            break;
        }

        else {
            int roll1 = rand() % 6 + 1;
            int roll2 = rand() % 6 + 1;
            int result = roll1 + roll2;
            chances += 1;

            cout << "You rolled: " << roll1 << " and " << roll2
                 << " (Total: " << result << ")\n";
        }
    }

    return 0;
}
