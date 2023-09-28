//Fil ename = Iterationg with do while.cpp/// date: 28 April

#include <iostream>
#include <cstdlib>

//Guess the secret number

using namespace std;

// Main() function
int main()
{
    char ans;

//loop until user is done
do
{
    //Choose a secret number
    int fav = std::rand() % 32;

    //Loop until user guesses secret number
    int num;
    do
    {
        cout << "Guess my secret number  (0 - 32)" ; 
        cin >> num;

        //report the status of the guess
        cout << (num < fav ? "Too low": num > fav ?  "Too high": "Right") << endl;
    }
    while (num != fav);
        cout << "Go Again? (y/n)" ;
        cin >> ans;
}
while (ans == 'y');    

    return 0;
}