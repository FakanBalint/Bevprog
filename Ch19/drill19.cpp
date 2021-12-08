 #include "../../std_lib_facilities.h"
#include <iostream>
#include <vector>

template<typename T> 
struct S {
private: 
	T val;

public:
	S(T x) {val = x;};
	T get () const;
	T& get();

	void print(){
		cout << val << endl;
	}
	void operator=(const T& stemp){
		val = stemp;
	}
};

void vectorout(ostream& os, vector<int> v){
	cout << "Vektor elemei: ";
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i]<< " ";
	}
	cout << endl;
}

template<typename T>
T S<T>::get()const {return val;};

template<typename T>
T& S<T>::get(){return val;};

template<typename T >
ostream& operator<<(ostream& os, S<T>& stemp){return os<<stemp.get();}; 

template<typename T >
istream& operator>>(istream& is, S<T>& stemp){return is>>stemp.get();}; 

int main()
{
	
	S<int>sint(66);
		sint.print();
	S<char>schar('c');
		schar.print();
	S<double>sdouble(6.6);
		sdouble.print();
	S<string>sstring("string");
		sstring.print();
	S<vector<int>>svector({1,2,4,8,16});
	vectorout(cout, svector.get());
	cout << endl;

	/*cout << sint.get() << endl;
	cout << schar.get() << endl;
	cout << sdouble.get() << endl;
	cout << sstring.get() << endl;
	vectorout(cout, svector.get());
	cout << endl;
	*/
	return 0;
}
