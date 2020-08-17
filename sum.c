#include<iostream.h>
#include<conio.h>
using namespace std;
int main()
{
int num,rem,sum=0;
cout<<"Enter a number";
cin>>num;
while(num>0)
{
rem=num%10;
num=num/10;
sum=sum+rem;
}

cout<<"the sum is"<<sum;
getch();
}
