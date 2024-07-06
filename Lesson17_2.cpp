#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char firstName[20];
    char lastName[20];
    char fullName[42];

    cout << "Enter Your First name: ";
    cin >> firstName;
    cout << "Enter Your Last name: ";
    cin >> lastName;

    strcpy(fullName, firstName);

    strcat(fullName, " ");
    strcat(fullName, lastName);

    int result = strcmp(firstName, lastName);
    int nameLen = strlen(fullName);

    cout << "Your Full Name: " << fullName << endl;
    cout << "Your name has " << nameLen << " characters." << endl;
    if (result > 0)
        cout << "Your first name is lengthier then the last name." << endl;
    else if (result == 0)
        cout << "Your first name equal to last." << endl;
    else
        cout << "Your last name is lengthier then the first name." << endl;

    // Search functions
    char *searched = strchr(fullName, 'k');
    cout << *searched;

    size_t resultOfSearch = strcspn(firstName, lastName);
    cout << "Result of search: " << resultOfSearch << endl;

    return 0;
}
