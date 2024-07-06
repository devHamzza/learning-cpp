#include <iostream>
using namespace std;

int main()
{
    union intOrChar
    {
        char c[4];
        int x;
    } u1;

    u1.x = 7;
    cout << "The value of c = " << u1.c[0] << "," << u1.c[1]
         << "," << u1.c[2] << "," << u1.c[3] << endl;
    cout << "The value of x = " << u1.x << endl;

    u1.x *= 256;
    u1.x += 'b';
    cout << "The value of c = " << u1.c[0] << "," << u1.c[1]
         << "," << u1.c[2] << "," << u1.c[3] << endl;
    cout << "The value of x = " << u1.x << endl;

    u1.x *= 256;
    u1.x += 'c';
    cout << "The value of c = " << u1.c[0] << "," << u1.c[1]
         << "," << u1.c[2] << "," << u1.c[3] << endl;
    cout << "The value of x = " << u1.x << endl;

    u1.x *= 256;
    u1.x += 'd';
    cout << "The value of c = " << u1.c[0] << "," << u1.c[1]
         << "," << u1.c[2] << "," << u1.c[3] << endl;
    cout << "The value of x = " << u1.x << endl;

    return 0;
}
