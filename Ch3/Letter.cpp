#include "std_lib_facilities.h"

int main(){
string FN= "";//Firstname
string FriendN= ""; //Friend's Name
char FGender = ' ';//Friend's Gender
int age = 0; //Friend's Age
cout <<"Enter the name of the person you want to write to" << endl; 
cin >> FN;
cout <<"Hello " << FN << "," << endl;
cout <<"How are you? I am fine. I miss you.\nWe have met soo long ago are you still doing your hobbies?"<< endl;

cout <<"Enter your other friend's name and gender(f for female m for male)" << endl; 
cin >> FriendN >>FGender;

if(FGender=='m'){
    cout << "Have you seen " << FriendN << " lately?"<< endl;
    cout<< "If you see "<< FriendN<<" please ask him to call me."<< endl;
}
else if (FGender=='f'){
    cout << "Have you seen " << FriendN << " lately?"<< endl;
    cout<< "If you see "<<FriendN<< " please ask her to call me."<< endl;
}
else{
     cout<<"Incorrect gender"<<endl;
     exit(0);
}

cout <<"Enter the age of the recipient" << endl;
cin>>age;

if (age <= 0 || age >= 100) {
    error("You are kidding!");
}
else{
cout << "I hear you just had your birthday and you are "<< age << " years old." << endl;

if (age < 12) {
    cout << "Next year you will be " << age + 1 << "." << endl;
  } 
else if (age == 17) {
    cout << "Next year, you will be able to vote." << endl;
  } 
else if (age > 70) {
    cout << "I hope your are enjoying retirement." << endl;
  }
}
  cout << "Yours sincerely,\n\n\nBálint" <<  endl;
  
return 0;
}

