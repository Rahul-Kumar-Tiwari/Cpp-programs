#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
 int num1,num2,num3;
 cout<<"Enter three numbers:\n";
 cin>>num1>>num2>>num3;
 
 cout<<"\nDisplaying the three numbers\n"
     <<"Num1:"<<setw(8)<<num1<<endl
     <<"Num2:"<<setw(8)<<num2<<endl
     <<"Num3:"<<setw(8)<<num3<<endl;
 
 getch();
 return 0;
}
