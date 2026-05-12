#include <iostream>
#include "Teachers.cpp"
using namespace std;

int main()
{
    int size;

    cout << "Enter number of teachers : ";
    cin >> size;

    Teachers teacher[size];

    cout << endl
         << "Teachers Input" << endl;

    for (int i = 0; i < size; i++)
        teacher[i].setTeacherData();

    Teachers::tableHeader();

    for (int i = 0; i < size; i++)
        teacher[i].getTeacherData();

    Teachers::getData();
}