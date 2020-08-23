#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
long long int fib(long long int n)
{
    if(n < 2)
        return n;
    long long int a = 0,b = 1,ans;
    int i = 1;
    while(i < n)
    {
        ans = (a+b) % MOD;
        a = b;
        b = ans;
        i++;

    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n+2)-1;
}
