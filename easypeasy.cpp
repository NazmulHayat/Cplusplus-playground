#include<bits/stdc++.h>
using namespace std;

void srch(int arr[], int n)
{
    int counter = 0;
    sort(arr, arr+n);
    for(int i=0;i<n/2;i++)
    {

        for(int j=n-1;j>=0;j--)
        {
            if(arr[j] - arr[i] > 1){
                counter++;
                break;
            }
        }
    }
    cout<<counter<<endl;
}

int main()
{
    int tc;
    cin>>tc;
    for(int i = 0 ; i < tc ; i++)
    {
        int n




        cin>>n;
        int arr[n];
        for(int j = 0 ; j < n ; j++)
            cin>>arr[j];
        if(n>1)srch(arr, n);

else cout<<1<<endl;    }

}
