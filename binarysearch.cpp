#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[9] = {12, 20 , 53, 61, 72, 89, 94, 110, 131};

    int low = 0,high = 8;
    int sumform;
    int userVal;
    cin>>userVal;

    while(low<=high)
    {
       sumform = (low + high)/2;

       if(arr[sumform] == userVal)
       {
           break;
       }
       else if(arr[sumform] < userVal)
       {
           low = sumform + 1;
       }
       else if(arr[sumform] > userVal)
       {
           high = sumform - 1;
       }
    }
    cout<<"The index is: "<<sumform<<endl;

}
