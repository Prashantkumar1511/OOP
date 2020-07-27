#include<iostream>
using namespace std;
int main()
{
int a[20],n,i=0,j=0,temp;
cout<<"Enter the limit of array! ";

cin>>n;
cout<<"Enter the elements of array! "<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(i=0;i<n;i++)
{
temp=a[i];
j=i-1;
while(j>=0&&a[j]>temp)
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
cout<<"Sorted array is ";
for(i=0;i<n;i++)
{
cout<<a[i];
}
return 0;
}
