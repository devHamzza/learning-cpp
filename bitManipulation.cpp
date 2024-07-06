#include <iostream>
using namespace std;
main()
{
    char password[10];
    char *passptr;
    cout << "Please enter a password(less than 10 character): ";
    cin >> password;
    passptr = password;
    while (*passptr != '\0')
    {
        *passptr = (*passptr ^ 3);
        ++passptr;
    }
    cout << "The encrypted password is: " << password << endl;
    // now decrypting the encrypted password by using ^ with 3
    passptr = password;
    while (*passptr != '\0')
    {
        *passptr = (*passptr ^ 3);
        ++passptr;
    }
    cout << "The decrypted password is: " << password << endl;
}


//strong encryption by using strongkey

// #include <iostream>
// #include <cstring>
// using namespace std;

// void encryptDecrypt(char *input, const char *key)
// {
//     size_t len = strlen(input);
//     size_t keyLen = strlen(key);

//     for (size_t i = 0; i < len; ++i)
//     {
//         input[i] = input[i] ^ key[i % keyLen];
//     }
// }

// int main()
// {
//     char password[10];
//     const char key[] = "strongkey"; // Example key
//     cout << "Please enter a password (less than 10 characters): ";
//     cin >> password;

//     // Encrypting the password using XOR with the key
//     encryptDecrypt(password, key);
//     cout << "The encrypted password is: " << password << endl;

//     // Decrypting the password using XOR with the key
//     encryptDecrypt(password, key);
//     cout << "The decrypted password is: " << password << endl;

//     return 0;
// }
