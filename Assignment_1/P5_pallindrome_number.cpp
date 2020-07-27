#include<iostream>
using namespace std;
int main()
{
int n,rem,sum=0,k;

cout<<"enter the number";
cin>>n;
k=n;
while(n>0)
{
rem=n%10;
sum=sum*10+rem;
n=n/10;
}
if(sum==k)
{
cout<<"Pallindrome!"<<endl;
}
else{
cout<<"Not a pallindrome!"<<endl;
}

return 0;
}

