//Name = Guess the number

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char ans;

    // Set up the random number generator
    srand(time(nullptr));

    do
    {
        // Choose a secret number
        int fav = rand() % 32;

        // Set up the number of guesses
        int max_guesses = 5;
        int num_guesses = 0;

        // Loop until user guesses secret number or runs out of guesses
        int num;
        do
        {
            cout << "Guess my secret number (0 - 32): ";
            cin >> num;

            // Validate input
            if (cin.fail())
            {
                cout << "Invalid input. Please enter a number." << endl;
                cin.clear();
                cin.ignore(10000, '\n');
                continue;
            }

            // Report the status of the guess
            num_guesses++;
            if (num < fav)
            {
                cout << "Too low!" << endl;
            }
            else if (num > fav)
            {
                cout << "Too high!" << endl;
            }
            else
            {
                cout << "                                           **Right**" << endl;
            }

        } while (num != fav && num_guesses < max_guesses);

        // Check if user wants to play again
        cout << "Do you want to play again? (y/n): ";
        cin >> ans;

        // Validate input
        while (ans != 'y' && ans != 'n')
        {
            cout << "Invalid input. Please enter 'y' or 'n'." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> ans;
        }

    } while (ans == 'y');

    cout << "                                                **Thanks for playing!**" << endl;

    return 0;
}
