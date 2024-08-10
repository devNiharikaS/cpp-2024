#include <iostream>
using namespace std;


    // f(x) = x^2 + 2
    int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
class Employee
{
public:
    string name;
    int salary;

    Employee(string name, int salary, int secretPassword)
    {
        this->name = name;
        this->salary = salary;
        this->secretPassword;
    }

    void printdetails()
    {
        cout << "The name of our first employee is " << this->name << " and her fisrt salary is";
    }

    void getsecretPassword()
    {
        cout << "The secretPassword of employee is " << this->secretPassword;
    }

private:
    int secretPassword;
};

  class Programmer : public Employee
{
    public:
          int errors;
};

int main()
{
    Employee Niha("Niharika constructor", 555000, 2425);
Niha.printdetails();
 Niha.getsecretPassword();
    return 0;
}