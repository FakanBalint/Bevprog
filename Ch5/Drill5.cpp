#include "std_lib_facilities.h" 




int main() {
	try {
	/*cout<<"Success!\n";		//Cout <<  " Success!\n" ; nagy C betű a coutban
	cout<<"Success!\n";		//cout <<  " Success !\n ; hiányzott egy " szimbólum a végéről
	cout<<"Success"<<"!\n";	//cout << " Success" <<  !\n" egy aposztróf kimaradt a felkiáltó jel előtt
	cout<<"success"<<endl; //cout << success <<  endl; macskakörmök hiányoztak a success kiírásánál valamint nem tudom mekkora probléma hogy nem Nagybetű és nincs "!" jel
	int res = 7 ;   vector<string> v(10); v[5] = res;  cout <<" Success!\n "; // string res = 7 ;   vector<int> v(10); v[5]  = res;  cout <<  " Success!\n ";  össze volt keverve a res illetve a vector változók tipusa
	vector<int> v(10); v[5] = 7;  if (v[4]!= 7) cout << " Success!\n" ;   //vector<inl> v(10); v(5) = 7;  if (v(5)! = 7) cout << " Success!\n" ;   [] kellenek index megjelöléshez nem () valamint nem teljesülne a ha függvény ezért az 5. index helyett mést kell vizsgálni pl a 4 est
	if(bool cond= true; cond ==true) cout <<"Success!\n ";  else cout <<"Fail!\n" ;	//if(cond) cout <<  "Success!\n ";  else cout <<  " Fail!\n" ; na ebben nem vagyok biztos de cond nak igaz hamisnak kellene lennie tehát bool de sehol nem volt létrehozva ezért léthrehoztam 
	string s = "ape" ;   bool c ="fool">s;  if(c)  cout<<"Success!\n";	//string s =  "ape" ;   boo  c =  "fool"<s;  i f   (c)  cout <<  " Success!\n "  boo az bool akart lenni valamint logikai hiba miatt  nem lenne jó mert a fool 4 karaktert tartalmaz az ape csak 3 at a relációjelet meg kell fordítani
	string s =  "ape" ;   if (s=="fool"|| s=="ape") cout << " Success!\n " ; 	//string s =  "ape" ;   if (s=="fool") cout << "Success !\n" ; 2 megoldás van problémára van az "ape" nem "fool" ezért nem lesz sosem jó vagy az s értékét állítjuk "fool" ra vagy hogy az ape re is és a foolra is jó legyen || kell megoldani a vizsgálatot
	string s = "ape" ;  if(s=="fool"|| s=="ape") cout <<"Success!\n " ;  	//string s =  "ape" ;  i f   (s=="fool") cout <  "Success!\n " ;  coutnál hiányzott egy relációjel de uygan az a probléma mint az előzőnél
	string s = "ape" ;   if (s=="fool"|| s=="ape")  cout<<"Success!\n"; 	//string s = "ape " ;   if (s+"fool")  cout <"Success!\n"; szintén hiányzott "<" a Succes elől valamint  az s+ nem megfelelő operátor ha vizsgálni akarjuk hogy s az fool al egyenlő e akkor == operátort használunk és szintén nem dob vissza succest hacsak nem lesz ape a foolból vagy nem használunk || operátort
	vector<char> v(5); for  (int i=0;  i<v.size();  ++i) ;  cout <<  "Success !\n"; 	 //vector<char> v(5); for  (int i=0;  0<v.size();  ++i) ;  cout <<  "Success !\n";  a for ciklusnál meg kell  i vel kell nézni nem 0 val
	vector<char> v(5);  for  (int i=0;  i<=v.size();  ++i)  ;  cout <<  " Success!\n";  //vector<char> v(5);  for  (int i=0;  i<=v.size();  ++i)  ;  cout <<  " Success!\n";  foggalmam sincs mi lehet a probléma
	string s = "Success!\n"; for (int i=0; i<8; ++i) cout << s[i];
	if (true) cout << "Success!\n"; else cout << "Fail!\n";
	int x = 2000; int c = x; if (c==2000) cout << "Success!\n";
	string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
	vector<int> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
	int i=0; int j=9; while (i<10) ++i; if (j<i) cout << "Success!\n";
	int x = 3; double d = 5/(x-2); if (d==2*x-1) cout << "Success!\n";
	string s = "Success!\n"; for (int i=0; i<=8; ++i) cout << s[i];
	int i=0; while (i<10) ++i; if (10<=i) cout << "Success!\n";	
	double x=4; double d=5/(x-2); if (d=2*x+0.5) cout << "Success!\n";
	*/
		cout<<"Success!"<<endl;//cin <<  "Success!\n "; //cin helyett cout :)  
	keep_window_open(); 
	return 0;
}
	catch  (exception& e) { 
	cerr << "error:  "<< e.what() << '\n'; 
	keep_window_open(); 
	return 1 ;
}
	catch ( ... ) 
	{ 
	cerr <<  "Oops:  unknown exception !\n"; 
	keep_window_open(); 
	return 2;
	}
}

