#include <iostream>
#include <string.h>
using namespace std;

class String
{
private:
    char string[20];

public:
    String()
    {
        strcpy(string, "");
    };

    void getString()
    {
        cout << "Enter the String: ";
        cin >> string;
    };

    void displayString()
    {
        cout << "The String is : " << string << endl;
    };

    String operator+(String &s) {
        String temp;
        strcpy(temp.string, "");
        strcat(temp.string, string);
        strcat(temp.string, s.string);
        return temp;
    };
};

// String String::operator+(String& s){
//     String temp;
//     strcpy(temp.string, "");
//     strcat(temp.string, string);
//     strcat(temp.string, s.string);
//     return temp;
// };

int main()
{
    String string1, string2, string3;

    string1.getString();
    string2.getString();
    string3.getString();
    string1.displayString();
    string2.displayString();

    String hold = string1 + string3 + string2;
    hold.displayString();
}