#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    long int begin, end;
    ifstream myfile("ab.txt");
    begin = mylife.tellg();
    myfile.seekg (0,ios::end);
    end =myfile.tellg();
    myfile.close();
    cout<<"size is:"<<(end-begin)<<"bytes";
    getch();
    return 0;
}
