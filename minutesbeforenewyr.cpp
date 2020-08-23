#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int hr, s;
    for(int i=1;i<=tc;i++)
    {
        cin>>hr>>s;
        cout<<(24*60)-((hr*60)+s)<<endl;
    }
}
