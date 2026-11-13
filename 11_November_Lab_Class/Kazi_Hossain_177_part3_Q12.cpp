
#include<bits/stdc++.h>
using namespace std;

class Course
{
private:
    int courseId;
    string courseName;

public:
    void setCourse(int id, string name)
    {
        courseId = id;
        courseName = name;
    }

    int getId()
    {
        return courseId;
    }

    string getName()
    {
        return courseName;
    }

    virtual void displayCourseType() = 0;
};

class TheoryCourse : public Course
{
public:
    void displayCourseType()
    {
        cout<<"This is a Theory Cource"<<endl;
    }
};

class LabCourse : public Course
{
public:
    void displayCourseType()
    {
        cout<<"This is a Lab Cource"<<endl;
    }
};




int main()
{
    Course *p;

    p = new TheoryCourse();

    p->setCourse(101,"Mathamatics");

    cout<<"Cource ID: "<<p->getId()<<endl;
    cout<<"Cource Name: "<<p->getName()<<endl;
    p->displayCourseType();

    delete p;

    p = new LabCourse();

    p->setCourse(102,"Computar Lab");

    cout<<endl;
    cout<<"Cource ID: "<<p->getId()<<endl;
    cout<<"Cource Name: "<<p->getName()<<endl;
    p->displayCourseType();

    delete p;

    return 04;
}
