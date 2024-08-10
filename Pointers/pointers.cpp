#include <iostream>
using namespace std;
int main()
{

int a = 34;
int* ptra;
ptra = &a;
cout<<"The value of a is "<<a<<endl;
cout<<"The value of a is "<<*ptra<<endl;
cout<<"The adress of a is "<<&a<<endl;
cout<<"The adress of a is "<<ptra<<endl;



return 0;

}