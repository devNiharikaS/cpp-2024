#include <iostream> 
using namespace std;
int main()
{
    int x = 516;
     char *xptr = (char *)&x;
    cout << (int)*xptr << end l;
    return 0;
}