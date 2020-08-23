#include<bits/stdc++.h>
using namespace std;

#define ll long long
const unsigned int MOD = 1000000007;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(0)

ll fib(ll n)
{
    if(n==1 || n==2)
        return 1;
    else{
        return fib(n-1)+fib(n-2);
    }
}

ll term[1000];
// Fibonacci Series using memoized Recursion
ll fib_m(ll n)
{
    // base case
    if (n <= 1)
        return n;
    // if fib(n) has already been computed
    // we do not do further recursive calls
    // and hence reduce the number of repeated
    // work
    if (term[n] != 0)
        return term[n];

    else {

        // store the computed value of fib(n)
        // in an array term at index n to
        // so that it does not needs to be
        // precomputed again
        term[n] = fib_m(n - 1) + fib_m(n - 2);

        return term[n];
    }
}

ll fib_bottom(ll n)
{
    if(n==1 || n==2)
        return 1;
    ll a = 0, b = 1, c;
    for(int i = 2 ; i <= n ; i++)
    {
        c = a+b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{
    ll t;
    cin>>t;
    cout<<"Normal Recursion: "<<fib(t)<<endl;
    cout<<"Memoization: "<<fib_m(t)<<endl;
    cout<<"Bottom-up: "<<fib_bottom(t)<<endl;
}
