#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int dividend = a >= b ? a : b;
    int divisor = a <= b ? a : b;
    while(divisor != 0)
    {
        int remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    return dividend;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}
