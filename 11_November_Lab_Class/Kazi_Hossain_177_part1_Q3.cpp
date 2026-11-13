#include<iostream>


using namespace std;
class Shape
{

public:
    virtual void calculateArea()=0;
};
class Squre:public Shape
{
  public:
        void calculateArea()
    {
        cout<<"calculate area implmented"<<endl;
    }
};


class Circle:public Shape
{
   public:
        void calculateArea()
    {
        cout<<"callculate area implemented"<<endl;
    }
};


int main()
{
    Squre s1;
    s1.calculateArea();
    Circle s2;
    s2.calculateArea();
    return 0;
}
