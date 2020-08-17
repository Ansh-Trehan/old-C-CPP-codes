#include<iostream>
#include<conio.h>
using namespace std;
//static variable
class student
{
private:
    static int a;
    int rollnum;
    int marks;
public:
    void input()
    {
        cout<<endl<<"enter the roll number\n";
        cin>>rollnum;
        cout<<endl<<"enter the marks\n";
        cin>>marks;
        a++;//static member used inside the class;
    }
    void total()
    {
        cout<<endl<<"total no. of students are:"<<a;
    }
    void display()
    {
        cout<<endl<<"roll number is "<<rollnum;
        cout<<endl<<"marks are:"<<marks;
    }
    static void showcount(void)
    {
        cout<<endl<<"No. of students"<<a;
    }
};
int student::a;
main()
{
    student s1,s2,s3;
    s1.input();
    student::showcount();
    s2.input();
    student::showcount();
    s3.input();
    student::showcount();
    s1.display();
    s2.display();
    s3.display();
    s1.total();
    cout<<"\n"<<sizeof(s1);
    getch();
}
