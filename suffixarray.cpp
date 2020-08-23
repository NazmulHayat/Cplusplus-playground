#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<s.length()<<" ";
    vector<char, int> m;
    for(int i = 0 ; i < s.length() ; i++)
    {
        m[s[i]].push_back(i);
    }
    sort(s.begin(), s.end());
    for(int i = 0 ; i < s.length() ; i++)
    {
        cout<<m[s[i]]<<" ";
    }
    cout<<endl;

}
