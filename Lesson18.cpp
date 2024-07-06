#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st = "I have written in this file through c++";
    ofstream out("Lesson18.txt");
    out << st;

    return 0;
}