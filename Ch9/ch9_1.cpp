 #include "std_lib_facilities.h"

struct Date //structnak minden tagja publikus
{                
    int y, m, d; //3 tag a structnak
};

void init_date(Date &date, int y, int m, int d)
{
    if (y > 0)
    {
        date.y = y;
    }
    else
    {
        error("Invalid year.");
    }
    if (m <= 12 && m > 0)
    {
        date.m = m;
    }
    else
    {
        error("Invalid month.");
    }
    if (d <= 31 && d > 0)
    {
        date.d = d;
    }
    else
    {
        error("Invalid day.");
    }
}

void add_day(Date &date, int n)
{ //Hozzáad valamennyi napot egy paraméterül adott naphoz.

    date.d += n;
    while (date.d > 31)
    {
        date.m++;
        date.d -= 31;
        if (date.m > 12)
        {
            date.y++;
            date.m -= 12;
        }
    }
}

int main()
{
    try
    {

        Date today; //Példány készítése

        today.y = 1978;
        today.m = 6;
        today.d = 25;

        std::cout << "Date: " << today.y << ". " << today.m << ". " << today.d << ".\n";

        Date tomorrow{today.y, today.m, today.d};

        add_day(tomorrow, 1);
        std::cout << "Tomorrow: " << tomorrow.y << ". " << tomorrow.m << ". " << tomorrow.d << ".\n";

        return 0;
    }
    catch (exception &e)
    {
        cerr << e.what();
        return 1;
    }
}