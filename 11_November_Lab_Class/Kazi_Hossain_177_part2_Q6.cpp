#include<iostream>
using namespace std;
class LandVehicle
{
public:
    void landinfo()
    {
      cout<<"This is land Vehicle"<<endl;
    }
};

class WaterVehicle

{
public:

    void waterinfo()
    {
        cout<<"This is Water vehicle"<<endl;
    }


};

class AmphibiousVehicle: public LandVehicle,public WaterVehicle
{
public:
   AmphibiousVehicle()
    {
        cout<<"This is Amphibious Vehicle"<<endl;
    }
};

int main()
{
    AmphibiousVehicle obj;
    obj.landinfo();
    obj.waterinfo();
    return 0;
}
