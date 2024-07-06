#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Student
{
    string name;
    string course;
    int age;
    float GPA;
};

void openFile(ifstream &inFile, ofstream &outFile);
Student getData(ifstream &inFile);
void writeData(ofstream &outFile, const Student &student);

int main()
{
    const int noOfStudents = 3;
    ifstream inFile;
    ofstream outFile;
    openFile(inFile, outFile);
    vector<Student> students;

    for (int i = 0; i < noOfStudents; i++)
    {
        if (!inFile.eof())
        {
            students.push_back(getData(inFile));
        }
        else
        {
            break;
        }
    }

    for (const auto &student : students)
    {
        writeData(outFile, student);
    }

    inFile.close();
    outFile.close();

    return 0;
}

void openFile(ifstream &inFile, ofstream &outFile)
{
    inFile.open("SAMPLE.TXT");
    outFile.open("SAMPLEOUT.TXT", ios::out | ios::app);

    if (!inFile || !outFile)
    {
        cout << "Error in opening the file" << endl;
        exit(1);
    }
}

Student getData(ifstream &inFile)
{
    Student tempStudent;
    string tempAge, tempGPA;

    getline(inFile, tempStudent.name);
    getline(inFile, tempStudent.course);
    getline(inFile, tempAge);
    tempStudent.age = stoi(tempAge);
    getline(inFile, tempGPA);
    tempStudent.GPA = stof(tempGPA);

    return tempStudent;
}

void writeData(ofstream &outFile, const Student &student)
{
    outFile << student.name << endl;
    outFile << student.course << endl;
    outFile << student.age << endl;
    outFile << student.GPA << endl;
}