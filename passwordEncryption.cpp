#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to encrypt the password
string encryptOrDecryptPassword(const string &password)
{
    string key = "strongkey";
    string encryptedPassword = password;
    size_t keyLen = key.length();

    for (size_t i = 0; i < encryptedPassword.length(); ++i)
    {
        encryptedPassword[i] = encryptedPassword[i] ^ key[i % keyLen];
    }

    return encryptedPassword;
}

int main()
{
    string password;
    cout << "Enter your password: ";
    cin >> password;

    // Encrypt the password
    string encryptedPassword = encryptOrDecryptPassword(password);

    // Save the encrypted password to a file
    ofstream file("password.txt");
    if (file.is_open())
    {
        file << encryptedPassword;
        file.close();
        cout << "Password saved successfully!" << endl;
    }
    else
    {
        cout << "Failed to save password." << endl;
        return 1;
    }

    // Prompt the user to enter the password again
    string enteredPassword;
    cout << "Enter the password again: ";
    cin >> enteredPassword;

    // Get and Decrypt the stored password
    string passwordFromFile;
    ifstream file2("password.txt");
    if (file2.is_open())
    {
        file2 >> passwordFromFile;
        file2.close();
    }
    else
    {
        cout << "Failed to read password." << endl;
        return 1;
    }

    string decryptedPassword = encryptOrDecryptPassword(passwordFromFile);

    // Compare the entered password with the stored password
    if (enteredPassword == decryptedPassword)
    {
        cout << "Password is valid." << endl;
    }
    else
    {
        cout << "Invalid password." << endl;
    }

    return 0;
}