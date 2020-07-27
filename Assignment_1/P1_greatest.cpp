#include<iostream>
using namespace std;
int main()
{
int number1,number2,number3,large;
cout<<"Enter the numbers!";
cin>>number1>>number2>>number3;
large=number1;
if(large<number2)
{
large=number2;
}
if(large<number3)
{
large=number3;
}
cout<<"Greatest Number From These Is "<<large<<endl;
return 0;
}
