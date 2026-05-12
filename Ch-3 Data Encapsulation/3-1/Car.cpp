#include <iostream>
using namespace std;

class Car
{
private:
    int no;
    string name;
    string model;
    string color;
    double price;

public:
    // Setter
    void setCar(int no, string name, string model, string color, double price)
    {
        this->no = no;
        this->name = name;
        this->model = model;
        this->color = color;
        this->price = price;

        this->getCar(); // Nasted Function
    }

    // Getter
    void getCar()
    {
        cout << "endl";
        cout << "Car No\t: " << this->no << endl;
        cout << "Car Name\t: " << this->name << endl;
        cout << "Car Model\t: " << this->model << endl;
        cout << "Car Color\t: " << this->color << endl;
        cout << "Car Price\t: " << this->price << endl;
    }
};