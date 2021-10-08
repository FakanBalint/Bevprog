#include "std_lib_facilities.h"


constexpr double cm_to_m =0.01;
constexpr double inch_to_m =2.54*cm_to_m;
constexpr double ft_to_m =12.0*inch_to_m;
const vector<string> legal_units {"cm", "m", "in", "ft"};

bool legalUnit(string unit)
{
    bool legal = false;
    for (auto legal_unit : legal_units)
    {
        if (unit == legal_unit)
        {
            legal = true;
        }

    }
    return legal;
}

void legalUnits()
{
    cout    << "\tcm for centimeters\n"<< "\tm for meters\n"<< "\tin for inches\n"<< "\tft for feet"<<endl;
}

double ToMeter(double val, string unit)
{
    if ("cm" == unit)
    {
        return val * cm_to_m;
    }
    else if ("in" == unit)
    {
        return val * inch_to_m;
    }
    else if ("ft" == unit)
    {
        return val * ft_to_m;
    }
    else {
        return val;
    }
}


int main(){


    /*cout << "Enter two integer values separated by a space\n";

    double val1= 0.0;
    double val2= 0.0;
    while (cin >> val1 >> val2)
    {
        cout << val1 << '\t' << val2 << '\n';

        if (val1 == val2)
        {
            cout<<"equal numbers!!!\t"<<endl;
        }
        else if (val1<val2)
        {
            cout<<"the smaller value is :\t"<<val1<<endl;
            cout<<"the larger value is :\t"<<val2<<endl;
        }
        else
        {
            cout<<"the smaller value is :\t"<<val2<<endl;
            cout<<"the larger value is :\t"<<val1<<endl;
        }

        double difference = val1 - val2;
        if (difference > 0 && difference < 1.0/10000000|| difference < 0 && difference > -1.0/10000000)
        {
            cout << "The numbers are almost equal.\n";
        }

    }
    */

    cout << "Enter a double value followed by a unit"<<endl;


    bool first = true;
    double val = 0.0;
    double Meter = 0.0;
    double smallest = 0.0;
    double largest = 0.0;
    int count {0};
    double sum {0.0};
    vector<double> values(0);
    string unit = "";

    legalUnits();

    while (cin >> val>> unit)
    {
       if (legalUnit(unit))
        {
            Meter = ToMeter(val, unit);
            cout << val << unit;
            if (unit != "m")
            {
                cout << " (" << Meter << "m)";
            }

            if (first == true)
            {
                first = false;
                smallest = val;
                largest = val;

                cout << " is the first value and also the smallest and largest "<<endl;
            }
            else if (Meter < smallest)
            {
                cout << " is the smallest so far.\n";
                smallest = Meter;
            }
            else if (Meter > largest)
            {
                cout << "is the largest so far.\n";
                largest = Meter;
            }
            else
            {
                cout << '\n';
            }
            sum += Meter;
            values.push_back(Meter);
            count++;
        }
        else 
        {
            cout << "Error: no legal unit. Enter one of "<<endl;
            legalUnits();
        }
    }
    cout << "The smallest: " << smallest << "m\n"
         << "The largest: " << largest << "m\n"
         << "Number of values entered: " << count << '\n'
         << "The sum of values in meters: " << sum<<"\n";
         
     sort(values);    
     
     cout << "The entered values in sorted order: ";
     for (auto value : values)
     {
          cout << value << " ";
     }
     cout << '\n';
    
    
return 0;
}