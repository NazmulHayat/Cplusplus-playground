#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int arr[n+1];

    int total = 0, ans = 0, temp = 0;
    int j = 0;

    // taking inputs of the array and doing the gcd using the built in function and adding them;
    int i = 0;
    for(i = 0 ; i < n/2 ; i++)
    {
        cin>>arr[i]>>arr[i+1];

        j += 2;
        temp = arr[i+1];

        if(j >= 1)
            ans = __gcd(arr[i], arr[i+1]);

        total += ans;
    }
    if(n % 2 != 0)
    {
        cin>>arr[n];
        ans = __gcd(arr[n], temp);
        total += ans;
    }
    cout<<total<<endl;

}
