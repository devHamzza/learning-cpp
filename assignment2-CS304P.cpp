#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Score
{
private:
    int score;

public:
    Score(int initialScore) : score(initialScore) {}

    Score &operator++()
    {
        ++score;
        return *this;
    }

    Score &operator--()
    {
        --score;
        return *this;
    }

    Score operator--(int)
    {
        Score temp = *this;
        score--;
        return temp;
    }

    int getScore() const
    {
        return score;
    }
};

class GuessingGame
{
private:
    int targetNumber;
    Score vPlayerScore;

    int generateRandomNumber()
    {
        return rand() % 10 + 1;
    }

public:
    GuessingGame() : vPlayerScore(5)
    {
        targetNumber = generateRandomNumber();
    }

    void play()
    {
        cout << "Virtual Guessing Game Starts!"
             << endl;
        cout << "The virtual player will guess a number between 1 and 10."
             << endl;
        cout << "Score decreases for incorrect guesses and increases for correct ones.\n"
             << endl;

        int playerAttempts = 0;

        while (vPlayerScore.getScore() > 0)
        {
            playerAttempts++;
            int guess = generateRandomNumber();
            cout << "Attempt " << playerAttempts << ": Virtual player guesses " << guess << ". ";

            if (guess > targetNumber)
            {
                --vPlayerScore;
                cout << "Too high! ";
            }
            else if (guess < targetNumber)
            {
                vPlayerScore--;
                cout << "Too low! ";
            }
            else
            {
                ++vPlayerScore;
                cout << "Correct! Score increases!" << endl;
                break;
            }

            cout << "Score decreases. Current score: " << vPlayerScore.getScore() << endl;
        }

        if (vPlayerScore.getScore() == 0)
        {
            cout << "\nGame Over! The virtual player ran out of score." << endl;
            cout << "The correct number was: " << targetNumber << endl;
        }
        else
        {
            cout << "\nThe virtual player guessed the correct number: " << targetNumber << endl;
            cout << "Final score: " << vPlayerScore.getScore() << endl;
        }
    }
};

int main()
{
    srand(time(0));

    GuessingGame virtualGuessingGame;
    virtualGuessingGame.play();

    return 0;
}
