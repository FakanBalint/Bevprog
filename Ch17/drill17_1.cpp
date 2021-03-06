 #include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

ostream& print_array(ostream& os, int* a, int n)
{
    for (int i = 0; i < n; ++i) os << a[i] << '\n';
    return os;
}

ostream& print_vector(ostream& os, vector<int>& v)
{
    for (int vv : v) os << vv << '\n';
    return os;
}

int main()
try {
    //free-store allocation

    int* arr20 = new int[20];       //Allocate an array of 20 ints on the free store; initialize it with the values 100, 101, 102, etc.; and 
                                    //print out its values.
                                    
    int x = 100;
    for (int i = 0; i < 20; ++i) {
        arr20[i] = x;
        ++x;
    }

    print_array(cout, arr20, 20);
    delete[] arr20;

    vector<int> v10(10);

    int y = 100;
    for (int& v : v10) {
        v = y;
        ++y;
    }

    print_vector(cout, v10);
}
catch(exception& e) {
    cerr << "Exception: " << e.what() << '\n';  // information from error printed
    return 1;
}
catch(...) {
    cerr << "Unknown exception\n";      //catch(...) if error do
    return 2;
}
