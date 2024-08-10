#include <iostream>
using namespace std;

// f(x) = x^2 + 2
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    // int arr[] = {1, 2, 6};
    // // Array Index   0  1  2
    // // cout<<arr[1];
    // int marks[6];

    // for (int i = 0; i < 6; i++)
    // {
    //     cout << "Enter the marks of " << i << "th student" << endl;
    //     cin >> marks[i];}

    int arr2d[4][3] = {
        {1, 2, 3},
        {4, 5, 6}
        };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "The value at " << i << ", " << j << " is " << arr2d[i][j] << endl;
        }
    }

    return 0;
}