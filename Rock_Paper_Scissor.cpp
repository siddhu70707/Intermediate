#include <iostream>
#include <cstdlib>  
#include <ctime>    

int main() { 
    
    while (true)
    {
       char user_input;

        std::cout << "Welcome to Rock Paper Scissors!" << '\n';
        std::cout << "Enter 'R' for Rock\n";
        std::cout << "Enter 'P' for Paper\n";
        std::cout << "Enter 'S' for Scissors\n";
        std::cout << "Enter 'Q' for EXIT\n ";
        std::cout << "Enter: ";
        std::cin >> user_input;

        while (user_input != 'R' && user_input != 'P' && user_input != 'S' && user_input != 'Q') {
            std::cout << "That's not a valid input!\n";
            std::cout << "Enter 'R' for Rock\n";
            std::cout << "Enter 'P' for Paper\n";
            std::cout << "Enter 'S' for Scissors\n";
            std::cout << "Enter: ";
            std::cin >> user_input;
        }

        if (user_input == 'Q')
        {
            std::cout << "Exit...";
            break;
        }

        srand(time(NULL));
        int computer_index = rand() % 3; // 0, 1, or 2
        char computer;

        if (computer_index == 0) computer = 'R';
        else if (computer_index == 1) computer = 'P';
        else computer = 'S';

        std::cout << "Computer chose: " << computer << '\n';

        if (user_input == 'Q')
        {
            std::cout << "Exit...";
            break;
        }
        

        
        if (computer == user_input) {
            std::cout << "It's a draw!\n";
        } else if (
            (user_input == 'R' && computer == 'S') ||
            (user_input == 'P' && computer == 'R') ||
            (user_input == 'S' && computer == 'P')
        ) {
            std::cout << "You Win!\n";
        } else {
            std::cout << "You Lose!\n";
        }

        }
    
    
    return 0;
}
