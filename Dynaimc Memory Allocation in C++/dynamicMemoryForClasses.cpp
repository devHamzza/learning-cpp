#include <iostream>
using namespace std;

class MyDate
{
public:
    MyDate()
    {
        // cout << "\n Parameterless constructor called ...";
        month = day = year = 0;
    }

    MyDate(int month, int day, int year)
    {
        // cout << "\n Constructor with three int parameters called ...";
        this->month = month;
        this->day = day;
        this->year = year;
    }

    ~MyDate()
    {
        // cout << "\n Destructor called ...";
    }

    void setMonth(int month)
    {
        this->month = month;
    }

    void setDay(int day)
    {
        this->day = day;
    }

    void setYear(int year)
    {
        this->year = year;
    }

    int getDay()
    {
        return this->day;
    }

    int getMonth()
    {
        return this->month;
    }

    int getYear()
    {
        return this->year;
    }

    void setDate(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

private:
    int month, day, year;
};

class Exam
{
private:
    MyDate *date;
    string time;
    string subject;

public:
    Exam(){};

    Exam(int day, int month, int year, string time, string subject)
    {
        date = new MyDate(day, month, year);
        this->time = time;
        this->subject = subject;
    }

    ~Exam()
    {
        delete date;
    }

    void display()
    {
        cout << "\n Exam Date: " << date->getDay() << "/" << date->getMonth() << "/" << date->getYear();
        cout << "\n Exam Time: " << time;
        cout << "\n Exam Subject: " << subject;
    }
};

int main()
{
    Exam *examPtr;
    cout << "\n Let's set date sheet for exams: ";
    cout << "\n How many exams you have? ";
    int num;
    cin >> num;
    examPtr = new Exam[num];

    for (int i = 0; i < num; i++)
    {
        int day, month, year;
        string time, subject;
        cout << "\n Enter Exam Date (dd mm yyyy): ";
        cin >> day >> month >> year;
        cout << "\n Enter Exam Time: ";
        cin >> time;
        cout << "\n Enter Exam Subject: ";
        cin >> subject;
        examPtr[i] = Exam(day, month, year, time, subject);
    }

    for (int i = 0; i < num; i++)
    {
        examPtr[i].display();
    }

    delete[] examPtr;
    return 0;
}