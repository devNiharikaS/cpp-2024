#include <bits/stdc++.h>
using namespace std;

int hexadecimaltoDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while(n>0)
    {
        int y = n%10;
ans += x*y;
x *= 2;
n /= 10;
    }
    return ans;
}
int hexadecimaltoDecimal(string n)
{
    int ans = 0;
    int x = 1;

    int s = n.size();
    for (int i=s-1; i>=0; i--)
    {
        if(n[i] >= '0' && n[i] <= '9')
        {
            ans +=x*(n[i]-'0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F')
    {
    ans += x*(n[i]- 'A' + 10);
}   
x *= 16;  

}
return ans;
}
string decimalToHexadecimal(int n)
{
    int x = 1;
    string ans = " ";
    while(x <= n)
    x*=16;
    x /= 16;
    while (x>0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /=16;
        if(lastDigit <= 9)
        ans = ans + to_string(lastDigit);
        else
        {
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }

    }
    return ans;
    
}


int32_t main(){
    int n;
    cin>>n;

    cout<< decimalToHexadecimal(n)<<endl;
}