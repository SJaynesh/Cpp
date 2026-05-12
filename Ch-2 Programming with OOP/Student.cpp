#include <iostream>
using namespace std;

class Student
{
    // Data Members / Attributes
private:
    int rollNo;
    string name;
    int age;
    double per;

public:
    // Methods / Member Functions
    void setStudentData()
    {
        cout << "Enter your roll no : ";
        cin >> rollNo;
        cout << "Enter your name : ";
        cin >> name;
        cout << "Enter your age : ";
        cin >> age;
        cout << "Enter your per : ";
        cin >> per;
        cout << endl;
    }

    void getStudentData()
    {
        cout << endl;

        cout << "Student Roll No : " << rollNo << endl;
        cout << "Student Name : " << name << endl;
        cout << "Student Age  : " << age << endl;
        cout << "Student Per  : " << per << endl;
    }
};
