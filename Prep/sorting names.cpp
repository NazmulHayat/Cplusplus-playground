#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char s[5000][205];
    char temp[30];
    int i=0,j=0;
    while(cin>>s[i][j] && EOF)
    {
        i++;j++;
    }
    for(int k=0;k<(i*j)-1;k++)
    {
        for(int l=i+1;j<(i*j)+1;l++)
        {
            if(strcmp(s[k],s[l])>0)
                {
                    strcpy(temp,s[l]);
                    strcpy(s[l],s[k]);
                    strcpy(s[k],temp);
                }
        }
    }
    for(int t=0;t<i*j;t++)
        cout<<s[t]<<endl;
}
