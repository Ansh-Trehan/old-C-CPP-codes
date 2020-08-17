#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
//class with member function and data members
class filestore
{
    char name[20];
    int age;
public:
    void getdata();
    void putdata();
};

void filestore::getdata()
{
    cout<<"\nEnter name";
    gets(name);
    cout<<"\nEnter age";
    cin>>age;
}
void filestore::putdata()
{
    cout<<"\nName"<<name<<"\nAge"<<age;
}
int main()
{
    //creating object of class
    fstream fp;
    //opening file test.dat both for input and output
    fp.open("hello.txt",ios::in|ios::out|ios::binary);
    filestore fs;
    //calling the member function to get input
    fs.getdata();
    //writing the data into the file
    fp.write((char*)&fs,sizeof (fs));
    //moving the get pointer to the beginning of the function
    fp.seekg(0,ios::beg);
    //reading from the beginning using read function
    fp.read((char*)&fs,sizeof (fs));
    //displaying the data with the help of putdata
    fs.putdata();
    getch();
}
