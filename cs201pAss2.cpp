#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

class Player
{
private:
    string playerName;
    int totalScore;
    int ballsPlayed;

public:
    Player() : totalScore(0), ballsPlayed(0) {}

    void setName(string name)
    {
        playerName = name;
    }

    string getName()
    {
        return playerName;
    }

    void setScore(int score)
    {
        totalScore += score;
    }

    int getScore()
    {
        return totalScore;
    }

    void setBalls(int balls)
    {
        ballsPlayed += balls;
    }

    int getBalls()
    {
        return ballsPlayed;
    }
};

int main()
{
    srand(time(0));

    string playerNames[] = {
        "Saim Ayub", "Sharjeel Khan", "Babar Azam", "Muhammad Hafeez", "Shoaib Malik",
        "Asif Ali", "Imad Wasim", "Aamir Jamal", "Muhammad Amir", "Naseem Shah", "Shaheen Afridi"};

    Player players[11];

    for (int i = 0; i < 11; ++i)
    {
        players[i].setName(playerNames[i]);
    }

    for (int i = 0; i < 11; ++i)
    {
        cout << i + 1 << ". " << players[i].getName() << endl;
        cout << "Scores per Ball: ";
        while (true)
        {
            int score = rand() % 8 - 1;
            if (score == 5)
                continue;
            if (score == -1)
            {
                cout << "OUT" << endl;
                players[i].setBalls(1);
                break;
            }
            else
            {
                cout << score << ", ";
                players[i].setScore(score);
                players[i].setBalls(1);
            }
        }
        cout << "Total Score: " << players[i].getScore() << "    Balls Played: " << players[i].getBalls() << endl;
        cout << endl;
    }

    cout << "------- Match Summary  -------" << endl;
    cout << left << setw(15) << "Player" << setw(10) << "     Score" << setw(10) << "     Balls" << endl;

    int maxScore = 0;
    string manOfTheMatch;
    for (int i = 0; i < 11; ++i)
    {
        cout << left << setw(15) << players[i].getName() << "     " << setw(10) << players[i].getScore() << setw(10) << players[i].getBalls() << endl;
        if (players[i].getScore() > maxScore)
        {
            maxScore = players[i].getScore();
            manOfTheMatch = players[i].getName();
        }
    }

    cout << endl
         << "Man of the Match: " << manOfTheMatch << endl;

    return 0;
}
