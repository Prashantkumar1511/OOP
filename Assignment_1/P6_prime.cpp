#include<iostream>
using namespace std;
int main()
{
int n,c=0,i=0;
cout<<"Enter a  number! ";
cin>>n;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
c=c+1;
}
}
if(c>0)
{
cout<<"Number is Not Prime!"<<endl;
}
else{
cout<<"Number is Prime!"<<endl;
}
return 0;
}

