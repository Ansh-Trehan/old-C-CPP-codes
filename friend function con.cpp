#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
    int a,b;
public:
    int setvalue()
    {
        a=25;
        b=5;
    }
    friend float mean(sample s);

};

float mean (sample s)
{
      return float(s.a +s.b)/2.0;
  }
int main()
{
    sample y;
    y.setvalue();
    cout<<"mean"<<mean(y)<<endl;
    return 0;
}
