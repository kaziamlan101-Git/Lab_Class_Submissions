#include<bits/stdc++.h>

using namespace std;
class Vehicle
{
public:
    void displayVehicleInfo()
    {
      cout<<"This is Vehicle"<<endl;
    }


};

class Car:public Vehicle

{


public:
    int door;
    string brand;

    void carinfo(string b,int d)
    {
        door=d;
        brand=b;
        cout<<b<<endl;
        cout<<d<<endl;
    }


};

class Bus:public Vehicle
{
public:
    int route;
    int capacity;

   void busInfo(int a,int b)
    {
        route= a;
        capacity =b;
        cout<<route<<endl;
        cout<<capacity<<endl;
    }
};

int main()
{
    Car c1;
    c1.displayVehicleInfo();
    c1.carinfo("Honda",4);
    Bus b1;
    b1.displayVehicleInfo();
    b1.busInfo(33,1344);
    return 0;
}
