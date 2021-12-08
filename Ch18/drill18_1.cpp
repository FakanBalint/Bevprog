 #include <iostream>
#include <stdexcept>

// 1 Define a global int array
int ga[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

void f(int ai[], int n)
{
    int la[10] = { };
    for (int i = 0; i < n; ++i) la[i] = ai[i];      //Copy the values from ga into la.

    std::cout << "Local copy\n";
    for (const auto& a : la)
        std::cout << a << ' ';      //Print out the elements of la. ?
    std::cout << '\n';

    int* p = new int[n];
    for (int i = 0; i < n; ++i) p[i] = ai[i];
    
    std::cout << "Pointer to free store\n";
    for (int i = 0; i < n; ++i)
        std::cout << p[i] << ' ';
    std::cout << '\n';

    delete[] p;
}

int fac(int n) { return n > 1 ? n*fac(n-1) : 1; }

int main()
try {

    std::cout << "Binary array\n";
    f(ga, 10);

    int aa[10] = {};
    for (int i = 0; i < 10; ++i)        //Define an array aa with ten elements, and initialize it with the first ten factorial values
        aa[i] = fac(i + 1);             // (1, 2*1, 3*2*1, 4*3*2*1, etc.).

    std::cout << "Factorial array\n";
    f(aa, 10);
}
catch(std::exception& e) {
    std::cerr << "Exception: " << e.what() << '\n';
    return 1;
}
catch(...) {
    std::cerr << "Unknown exception\n";
    return 2;
}