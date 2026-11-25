#include<bits/stdc++.h>

using namespace std;

class resultCalculator
{
public:
    void CalculateTotal(int a, int b)
    {
        cout<<"Calculate result:"<<(a+b)<<endl;
    }

    void CalculateTotal(int a, int b, int c)
    {
        cout<<"Calculate result:"<<(a+b+c)<<endl;
    }

    void CalculateTotal(double a, double b)
    {
        cout<<"Calculate result:"<<(a+b)<<endl;
    }
};



int main()
{
    resultCalculator s1;

    s1.CalculateTotal(78,89);
    s1.CalculateTotal(78,89, 83);
    s1.CalculateTotal(56.8,78.5);

    return 0;


}
