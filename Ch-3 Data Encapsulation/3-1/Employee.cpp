#include <iostream>
using namespace std;

class Employee
{
private:
    int emp_no;
    string emp_name;
    double emp_salary;
    string emp_role;

public:
    // setter
    void setEmployee()
    {
        cout << "Enter employee number : ";
        cin >> this->emp_no;
        cout << "Enter employee name : ";
        cin >> this->emp_name;
        cout << "Enter employee salary : ";
        cin >> this->emp_salary;
        cout << "Enter employee role : ";
        cin >> this->emp_role;
    }

    // getter
    void getEmployee()
    {
        cout << endl;
        cout << "EMP NO\t\t: " << this->emp_no << endl;
        cout << "EMP NAME\t: " << this->emp_name << endl;
        cout << "EMP SALARY\t: " << this->emp_salary << endl;
        cout << "EMP ROLE\t: " << this->emp_role << endl;
    }
};