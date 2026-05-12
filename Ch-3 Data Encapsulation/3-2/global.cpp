#include <iostream>
using namespace std;

int a = 25; // Global Variable

void sum(int num)
{
    cout << ::a + num;
}

int main()
{
    int a = 36;

    cout << "Number : " << ::a + a << endl;
    sum(10);
}