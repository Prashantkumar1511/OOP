#include<iostream>
using namespace std;
int main()
{
int a[20],n,i=0,j=0,temp;
cout<<"Enter the limit of array!";
cin>>n;
cout<<"Enter the elements of array!";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
cout<<"2nd Maximum number is "<<a[n-2]<<endl;
cout<<"2nd Minimum number is "<<a[1]<<endl;
return 0;
}


