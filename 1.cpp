#include<iostream>
#include<string>
using namespace std;

//====  working with the strings====
int main(){
string name="Aniket";
string lastname="Tembhurne ";
string rollno = "20";

string fullname=name+lastname;


//concatenation
cout<< name+" "+lastname<<endl;

// apending the names
cout<<"append ";
cout<<name.append(lastname)<<endl;
cout<<"combining int with strngs ";

//adding numbers and strings 
cout<<name.append(rollno)<<endl;

//printi;ng length of the string
// note =============
// It is completely up to you if you want to use length() or size():
cout<<"length of the string = ";

cout<<fullname.length()<<endl;

//accessing elements of the strings 

cout<<"character at 4th position "<<fullname[3];



return 0;

}