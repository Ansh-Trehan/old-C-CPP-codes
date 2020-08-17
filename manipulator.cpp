
#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	int a;
	float f;
    cout<<"Enter the integer no";
	cin>>a;
    cout<<"No is:"<<a<<endl;
	cout<<"with setw:"<<setw(8)<<a<<endl;
	cout<<"With setfill:"<<setw(7)<<setfill('*')<<a<<endl;
	
	cout<<"Decimal base:"<<dec<<a<<endl;
	cout<<"Octal base:"<<oct<<a<<endl;
	cout<<"Hexadecimal base:"<<hex<<a<<endl;	
	cout<<"Enter the float no:";
	cin>>f;
	cout<<"with setprecision:"<<setprecision(2)<<f<<endl;
	cout<<"lovely"<<ends;
	cout<<"professional"<<endl;
	cout<<"University";
	
}
