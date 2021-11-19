
#include "std_lib_facilities.h"


int main()
try {
    int birth_year = 2002;

    cout << "decimal\t\t" << birth_year << '\n' << hex
         << "hexadecimal\t" << birth_year << '\n' << oct
         << "octal\t\t" << birth_year << '\n';

    cout << dec << 20 << '\n';

    cout << '|' << setw(8) << "Fakan" 
         << '|' << setw(8) << "Bálint" 
         << '|' << setw(24) << "fakan.balint@gmail.com"
         << '|' << setw(16) << "+36202184719" << "|\n"
         << '|' << setw(8) << "Fakan" 
         << '|' << setw(8) << "Dénes"
         << '|' << setw(24) << "fakan.denes@gmail.com"
         << '|' << setw(16) << "+36208242414" << "|\n";
}
catch(exception& e) {
    cerr << "Error: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Something troubling occurred..\n";
    return 2;
}