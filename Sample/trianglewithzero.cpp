#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
    {
        cout<<endl;
        for(j=1;j<=i;j++)

        {if(j==1||j==i)
        {
            cout<<"\t"<<i<<"\t";
        }
        else
        {
            cout<<"\t"<<"0"<<"\t";
        } }
    }
    return 0;
}