#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n,num,dig,rev=0;
cout<<"Enter a number";
cin>>num;
n=num;
do
{
dig=num%10;
rev=(rev*10)+dig;
num=num/10;
}
while(num!=0);
cout<<"The reverse of the number is:"<<rev<<endl;
if(n==rev)
cout<<"the number is palindrome";
else
cout<<"the nuner is not palindrome";
return 0;
}
