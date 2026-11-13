#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;


    int age;


    public:
    Person() {
        name = "Unknown";
        age = 0;
    }

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void setName(string name) {
        this->name = name;
    }
    void setAge(int age) {
        this->age = age;
    }

    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
};

class Employee : public Person {
private:
    int employeeId;
    double salary;

public:
    Employee() {
        employeeId = 0;
        salary = 0.0;
    }

    Employee(string name, int age, int employeeId, double salary)
        : Person(name, age) 
    {
        this->employeeId = employeeId;
        this->salary = salary;
    }

    void setEmployeeId(int employeeId) {
        this->employeeId = employeeId;
    }
    void setSalary(double salary) {
        this->salary = salary;
    }

    int getEmployeeId() {
        return employeeId;
    }
    double getSalary() {
        return salary;
    }

    void display() {
        cout << "Employe Details" << endl;
        cout << "Name : " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary " << salary << endl;
    }
};

int main() {
    Employee emp;

    emp.setName("Rahim Ahmed");
    emp.setAge(28);

    emp.setEmployeeId(1001);
    emp.setSalary(55000.0);

    emp.display();

    return 10;
}

//hg