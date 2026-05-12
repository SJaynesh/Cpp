#include <iostream>
using namespace std;

class Teachers
{
private:
    int t_no;    // 4
    string name; // 20
    // Static Data Members /  Static Attributes / Static Field
    static string school; // 20 Static
    double salary;        // 8
    string time;          // 20
    static string lunch;

    // 1 Object = 72 bytes
    // 100 objects = 7200 bytes

    // school
    // 1 object = 20 bytes
    // 100 objects = 2000 bytes

    // 2000 - 20 = 1980 bytes
    // 7200 - 1980 = 5220 bytes

public:
    // setter
    void setTeacherData()
    {
        cout << endl;
        cout << "Enter teacher no : ";
        cin >> this->t_no;
        cout << "Enter teacher name : ";
        cin >> this->name;
        cout << "Enter teacher salary : ";
        cin >> this->salary;
        cout << "Enter teacher lecture timing : ";
        cin >> this->time;
    }

    static void tableHeader()
    {
        cout << endl
             << endl;
        cout << "| --\t----\t-------\t------\t----\t---- |" << endl;
        cout << "| NO\tNAME\tSCHOOL\tSALARY\tTIME\tLUNCH |" << endl;
        cout << "| --\t----\t-------\t------\t----\t----  |" << endl;
    }

    // Static Member Function / Static Method
    static void getData()
    {
        cout << "Static Data Print : " << school << endl;
        cout << "Static Data Print : " << lunch << endl;
    }

    // getter
    void getTeacherData()
    {
        cout << "| " << this->t_no << "\t" << this->name << "\t" << this->school << "\t" << this->salary << "\t" << this->time << "\t" << this->lunch << " |" << endl;
    }
};

string Teachers::school = "ABC School";
string Teachers::lunch = "01:00 PM";