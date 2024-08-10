#include <iostream>
using namespace std;

int main()
{
    // cout<<"hello";
    //  cout<<"niharika";

    // camelcase notation
    // int marksInMaths=83;
    // cout<<" Marks of student in Maths is " <<marksInMaths;
    // short a;
    // int b= 89;
    // long c;
    // long long d;
    // float const score = 45.32;
    // double score2 = 45.22;
    // long double score3 = 45.223;
    //  score = 34.2;
    // b = 34;
    // cout<<"The score is "<<score;

    // int a, b;
    // cout<<"Enter first number"<<endl;
    // cin>>a;
    // cout<<"Enter second number"<<endl;
    // cin>>b;

    int age;
    cout << "Enter your age" << endl;
    cin >> age;

    switch (age)
    {
    case 12:
        cout << "You are 12 year old";
        break;
    case 18:
        cout << "You are 18 year old";
        break;

    default:
        cout << "You are neither 12 nor 18 years old";
        break;
    }
    // {
    // if (age>=18){
    //     cout<<"You can vote";
    //     }
    //     else
    //     {
    //          cout<<"You can not vote";
    //     }

    return 0;
}
