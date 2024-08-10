#include <iostream>
#include <string>
using namespace std;

// f(x) = x^2 + 2
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
class Employee{
      public:
    string name;
    int salary;

    Employee(string name, int salary, int secretPassword)
    {
        this->name = name;
        this->salary = salary;
        this-> secretPassword;
    }


    void printdetails()
    {
        cout<<"The name of our first employee is "<< this->name << " and her fisrt salary is "<<this->salary<<endl;

    }

    void getsecretPassword()
    {
    cout<<"The secretPassword of employee is "<<this->secretPassword;
    }

    private:
    int secretPassword;

};


int main()

{

 Employee Niha("Niharika constructor", 555000, 2425);
//  Niha.name = "Niharika";
//  Niha.salary = 2500000;
 Niha.printdetails();
 Niha.getsecretPassword();
//  cout<<Niha.secretPassword;

//  cout<<"The name of our first employee is "<< Niha.name << " and her fisrt salary is "<<Niha.salary<<endl;
      






    return 0;
}