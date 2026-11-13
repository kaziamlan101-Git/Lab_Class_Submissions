#include<iostream>
using namespace std;
class Student
{
private:
    int studentId;
    string studentName;
    double cgpa;

public:
    void setter_1(int studentId)
    {
        this->studentId=studentId;
    }

    void setter_2(string studentName)
    {
        this->studentName=studentName;
    }
    void setter_3(double cgpa)
    {
        this->cgpa=cgpa;
    }


    int getter_1()
    {
        return studentId;
    }
   string getter_2()
    {
        return studentName;
    }



    double getter_3()
    {
        return cgpa;
    }

};


int main()
{
    Student obj1;
    obj1.setter_1(357251);
    obj1.setter_2("Rubel Is;am");
    obj1.setter_3(3.70);

  cout<<obj1.getter_1()<<endl;
  cout<<obj1.getter_2()<<endl;
  cout<<obj1.getter_3()<<endl;

  return 10;

}


