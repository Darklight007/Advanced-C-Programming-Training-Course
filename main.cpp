#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

class Employee
{
protected:
    string name;
    double pay;

public:
    Employee()
    {
        name = "";
        pay = 0;
    }

    Employee(string emplName, double payRate) : name{emplName}, pay{payRate}
    {

        // name{emplName};
        // pay{payRate};
    }

    ~Employee() {}

    string getName()
    {
        return name;
    }
    void setname(string empName)
    {
        name = empName;
    }
    double getPay()
    {
        return pay;
    }

    void setPay(double payRate)
    {
        pay = payRate;
    }

    virtual double grossPay(int hours)
    {
        return pay * hours;
    }

    string toString()
    {
        stringstream stm;
        stm << name << ": " << pay; // << "Gross pay: " << grossPay() ;
        return stm.str();
    }
};

class Manager : public Employee
{
private:
    bool salaried;

public:
    // Default constructor
    // Manager() : salaried(true) {}
    Manager(string name, double payRate, bool isSalaried)
        : Employee(name, payRate)
    {
        salaried = isSalaried;
    }

    // ~Manager()
    // {
    // }
 

    bool getSalaried()
    {
        return salaried;
    }

     double grossPay(int hours)

    {
        return pay;
    }

    string toString()
    {
        stringstream stm;
        string salary;

        if (salaried)
            salary = "Salaried";
        else
            salary = "hourly";
        stm << name << ": " << pay << " is Salaried: " << salary; // << "Gross pay: " << grossPay() ;
        return stm.str();
    }
};

int main()
{



    Employee emp1("Jones", 25.00);

    Employee *empPtr;
    empPtr = &emp1;

    cout << empPtr->grossPay(40) << endl;

    Employee *empPtr2;
    Manager mgr1("Smith", 1200, true);

    empPtr2 = &mgr1;

    cout << empPtr2->grossPay(40) << endl;

    vector<Employee*> emps;
    emps.push_back(&emp1);
    emps.push_back(&mgr1);


    for (int i =0;i < emps.size(); i++){
        cout << emps[i]->grossPay(40) << endl;

    }

    // Employee emp1("Jane Smith", 35000);
    // Employee emp2("Bill Boboli", 35000);

    // cout << emp1.toString() << endl;
    // cout << emp2.toString() << endl;
    // cout << "Gross pay: " << emp2.grossPay(40) << endl;

    // Manager emp3("Googi joogi", 1500, true);

    // cout << emp3.toString() << endl;

    return 0;
}