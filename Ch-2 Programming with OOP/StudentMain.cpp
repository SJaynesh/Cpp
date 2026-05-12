#include <iostream>
#include "Student.cpp"

int main()
{
    // Object => className objName;
    Student s1, s2;

    s1.setStudentData();
    s2.setStudentData();

    // s1.per = 32.12;

    s1.getStudentData();
    s2.getStudentData();
}