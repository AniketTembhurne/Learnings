#include<iostream>
using namespace std;


int main(){
int x,y,n;
int sum=x+y;
int sub=x-y;
int mul=x*y;
int div=x/y;
int mod=x%y;
    cout<<"\t $$$$  Welcome to simple calculator $$$$ \n \n";

cout<<" ---- enter first number----- \n";
cin>>x;
cout<<"----enter second number----- \n";

cin>>y;

cout<<"---enter the choice of your operation---";

cout<<"enter 1 for Addition\n";
cout<<"enter 2 for Substraction\n";
cout<<"enter 3 for Multiplication\n";
cout<<"enter 4 for Division\n";
cout<<"enter 5 for Modulus\n";
cin>>n;


switch (n)
{
    case 1: // code to be executed if n = 1;
    
    cout<<"Result is "<<sum;
break;
    case 2: // code to be executed if n = 2;
   
     cout<<"Result is "<<sub;
     break;

     case 3: // code to be executed if n = 2;
      
     cout<<"Result is "<<mul;
     break;
     case 4: // code to be executed if n = 2;
  
     cout<<"Result is "<<div;
     break;

     case 5: // code to be executed if n = 2;
    
     cout<<"Result is "<<mod;
     break;
    default: // code to be executed if n doesn't match any cases
     cout <<"Please enter the valid choice --";


return 0;
}
}

