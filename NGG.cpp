#include<iostream>
#include<ctime>
using std::cout;
using std::cin;
using std::endl;

int main ()
{
    cout << "Welcome to the Number Guessing Game!" << endl ;
    cout << "I'm thinking of a number between 1 and 100." << endl; 
    cout << "You should try to guess it" << endl;
    
    srand(time(0));
    int Number_Guess, Attempts_Left = 0, Attempts = 0, Guess, Difficulty, Random_Number = rand() % 101, Rand_50 = 25 + (rand() % 25), Rand_10 = 1 + (rand() % 11), minus;
    char Play_Again = 'y';
    cout << Random_Number << endl;
    cout << Rand_50 << endl;
    cout << Rand_10 << endl;
    do
    {
        cout << " Please select the difficulty level: " << endl;
        cout << " 1. Easy  (10 chances) " << endl;
        cout << " 2. Medium (5 chances) " << endl;
        cout << " 3. Hard   (3 chances) " << endl;
    
        cout << "Enter your choice: ";
        cin >>  Difficulty;
        switch (Difficulty)
        {
            case 1:
                cout << "Great! You have selected the Easy difficulty level." << endl;
                cout << " Let's start the game! " << endl;
                Number_Guess = 10;
            for (int i=1;i<=Number_Guess;i++)
                {
                    cout << "Enter your guess: ";
                    cin >> Guess;
                    Attempts++;
                    if (Attempts_Left <= 7 && Attempts_Left >=5)
                    {
                        minus = Random_Number - Rand_50;
                        cout << "The number is close to: " << minus << endl;
                    }
                    if (Attempts_Left <= 4 && Attempts_Left >=2)
                    {
                        minus = Random_Number - Rand_10;
                        cout << "The number is close to: " << minus << endl;
                    }
                    Attempts_Left = Number_Guess - Attempts;
                        if (Guess == Random_Number)
                        {
                            cout << "Congratulations! You guessed the correct number in " << Attempts << " attempts." << endl;
                            break;
                        }
                        else
                        {
                            if (Guess > Random_Number)
                            {
                                cout << "Incorrect! The number is less than: " << Guess << endl;
                                cout << "You have: " << Attempts_Left << "attempts left." << endl; 
                            }
                            else
                            {
                                cout << "Incorrect! The number is greater than: " << Guess << endl;
                                cout << "You have: " << Attempts_Left << " attempts left." << endl;
                                
                            }
                        }
                }
                cout << "You ran out of attempts. You lost!" << endl;
            break;
            case 2:
                cout << "Great! You have selected the Medium difficulty level." << endl;
                cout << " Let's start the game! " << endl;
                Number_Guess = 5;
            for (int i=1;i<=Number_Guess;i++)
                {
                    cout << "Enter your guess: ";
                    cin >> Guess;
                    Attempts++;
                    if (Attempts_Left <= 3 && Attempts_Left >=2)
                    {
                        minus = Random_Number - Rand_10;
                        cout << "The number is close to: " << minus << endl;
                    }
                    Attempts_Left = Number_Guess - Attempts;
                        if (Guess == Random_Number)
                        {
                            cout << "Congratulations! You guessed the correct number in " << Attempts << " attempts." << endl;
                            break;
                        }
                        else
                        {
                            if (Guess > Random_Number)
                            {
                                cout << "Incorrect! The number is less than: " << Guess << endl;
                                cout << "You have: " << Attempts_Left << "attempts left." << endl; 
                            }
                            else
                            {
                                cout << "Incorrect! The number is greater than: " << Guess << endl;
                                cout << "You have: " << Attempts_Left << " attempts left." << endl;
                                
                            }
                        }
                }
                cout << "You ran out of attempts. You lost!" << endl;
            break;
            case 3:
                cout << "Great! You have selected the Hard difficulty level." << endl;
                cout << " Let's start the game! " << endl;
                Number_Guess = 3;
            for (int i=1;i<=Number_Guess;i++)
                {
                    cout << "Enter your guess: ";
                    cin >> Guess;
                    Attempts++;
                    Attempts_Left = Number_Guess - Attempts;
                        if (Guess == Random_Number)
                        {
                            cout << "Congratulations! You guessed the correct number in " << Attempts << " attempts." << endl;
                            break;
                        }
                        else
                        {
                            if (Guess > Random_Number)
                            {
                                cout << "Incorrect! The number is less than: " << Guess << endl;
                                cout << "You have: " << Attempts_Left << "attempts left." << endl; 
                            }
                            else
                            {
                                cout << "Incorrect! The number is greater than: " << Guess << endl;
                                cout << "You have: " << Attempts_Left << " attempts left." << endl;
                                
                            }
                        }
                }
                cout << "You ran out of attempts. You lost!" << endl;
            break;
            default:
            cout << "Invalid difficulty " << endl;
            break;
        }
        cout << "Would you like to play again? (y/n) ";
        cin >> Play_Again;
    }
    while(Play_Again == 'y');
    cout << "Thanks for playing! :)";
    return 0;
}