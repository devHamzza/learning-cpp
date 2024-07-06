#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    char c;
    int i = 0, lc = 0, uc = 0, dig = 0, ws = 0, pun = 0, oth = 0;

    cout << "Please enter a character string and then press ENTER: ";

    // Analyse text as it is input:

    while ((c = getchar()) != '\n')
    {
        if (islower(c))
            lc++;
        else if (isupper(c))
            uc++;
        else if (isdigit(c))
            dig++;
        else if (isspace(c))
            ws++;
        else if (ispunct(c))
            pun++;
        else
            oth++;
    }
    // display the counts of different types of characters
    cout << "You typed:" << endl;
    cout << "lower case letters = " << lc << endl;
    cout << "upper case letters = " << uc << endl;
    cout << "digits = " << dig << endl;
    cout << "white space = " << ws << endl;
    cout << "punctuation = " << pun << endl;
    cout << "others = " << oth;
}