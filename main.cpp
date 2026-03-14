#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string getChoiceName(int choice) {
    if (choice == 1) return "Rock";
    if (choice == 2) return "Paper";
    return "Scissors";
}

int main() {
    srand(time(0));

    cout << "=== ROCK – PAPER – SCISSORS ===\n";

    while (true) {
        int playerChoice;
        cout << "\nChoose your move:\n";
        cout << "1. Rock\n2. Paper\n3. Scissors\n";
        cout << "Enter choice (1-3): ";
        cin >> playerChoice;

        if (playerChoice < 1 || playerChoice > 3) {
            cout << "Invalid choice. Try again.\n";
            continue;
        }

        int computerChoice = (rand() % 3) + 1;

        cout << "You chose: " << getChoiceName(playerChoice) << "\n";
        cout << "Computer chose: " << getChoiceName(computerChoice) << "\n";

        if (playerChoice == computerChoice) {
            cout << "It's a tie!\n";
        } else if (
            (playerChoice == 1 && computerChoice == 3) ||
            (playerChoice == 2 && computerChoice == 1) ||
            (playerChoice == 3 && computerChoice == 2)
        ) {
            cout << "You win!\n";
        } else {
            cout << "Computer wins!\n";
        }

        char again;
        cout << "\nPlay again? (y/n): ";
        cin >> again;

        if (again != 'y' && again != 'Y') {
            cout << "Thanks for playing!\n";
            break;
        }
    }

    return 0;
}
