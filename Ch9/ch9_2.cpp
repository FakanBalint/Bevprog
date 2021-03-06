#include "std_lib_facilities.h"

struct Date{
    int year, month, day; //3 tag a structnak
    Date(int y, int m, int d); //Konstruktor: segítségével megtudjuk határozni hogyan jöjjön létre az objektum
    void add_day(int n);

};

Date::Date(int y, int m, int d)
{
    if (y > 0)
    {
        year = y;
    }
    else
    {
        error("Invalid year.");
    }
    if (m <= 12 && m > 0)
    {
        month = m;
    }
    else
    {
        error("Invalid month.");
    }
    if (d <= 31 && d > 0)
    {
        day = d;
    }
    else
    {
        error("Invalid day.");
    }
}

void Date::add_day(int n)
{ //Hozzáad n napot egy paraméterül adott naphoz.

    day += n;
    while (day > 31)
    {
        month++;
        day -= 31;
        if (month > 12)
        {
            year++;
            month -= 12;
        }
    }
}

int main()
{
    try
    {

        Date today {1978, 6, 25}; 

        std::cout << "Date: " << today.year << ". " << today.month << ". " << today.day << ".\n";
        today.add_day(1);
        std::cout << "Date: " << today.year << ". " << today.month << ". " << today.day << ".\n";

        return 0;
    }
    catch (exception &e)
    {
        cerr << e.what();
        return 1;
    }
}