#include <iostream>
using namespace std;

class Date
{
private:
    int day, month, year;
    static Date defaultDate;

public:
    void setDefaultDate(int aDay, int aMonth, int aYear);
    void setDay(int aDay);
    int getDay() const;
    void addDay(int x);
    void setMonth(int aMonth);
    int getMonth() const;
    void addMonth(int x);
    void setYear(int aYear);
    int getYear() const;
    void addYear(int x);
    bool leapYear(int x) const;
    Date(int aDay, int aMonth, int aYear);
    void setDate(int aDay, int aMonth, int aYear);
    ~Date();
};

Date Date::defaultDate(1, 1, 2000);

Date::Date(int aDay, int aMonth, int aYear)
{
    if (aDay == 0)
    {
        this->day = defaultDate.day;
    }
    else
    {
        setDay(aDay);
    }

    if (aMonth == 0)
    {
        this->month = defaultDate.month;
    }
    else
    {
        setMonth(aMonth);
    }

    if (aYear == 0)
    {
        this->year = defaultDate.year;
    }
    else
    {
        setYear(aYear);
    }
}

void Date::setMonth(int a)
{
    if (a > 0 && a <= 12)
    {
        month = a;
    }
}

int Date::getMonth() const
{
    return month;
}

void Date::addYear(int x)
{
    year += x;

    if (day == 29 && month == 2 && !leapYear(year))
    {
        day = 1;
        month = 3;
    }
}
bool Date::leapYear(int x) const
{
    if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
    {
        return true;
    }
    return false;
}
void Date::setYear(int aYear)
{
    year = aYear;
}
void Date::setDay(int aDay)
{
    day = aDay;
}

void Date::setDate(int aDay, int aMonth, int aYear)
{
    setDay(aDay);
    setMonth(aMonth);
    setYear(aYear);
    cout << day << "/" << month << "/" << year << endl;
}

Date::~Date()
{
    cout << "Date destructor" << endl;
}
int main()
{
    Date aDate(0, 0, 0);

    aDate.setDate(29, 2, 2020);
    aDate.addYear(1);
    aDate.setDate(29, 2, 2021);
    aDate.addYear(1);
    aDate.setDate(29, 2, 2022);
    aDate.addYear(1);
    aDate.setDate(29, 2, 2023);

    return 0;
}
