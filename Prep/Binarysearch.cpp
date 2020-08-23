
// CPP program to implement
// Binary Search in
// Standard Template Library (STL)
#include <algorithm>
#include <iostream>

using namespace std;

void show(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; ++i)
        cout << a[i] << " ";
}

int main()
{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "\n The array is : ";
    show(a, asize);

    cout << "\n\nLet's say we want to search for 2 in the array";
    cout << "\n So, we first sort the array";
    sort(a, a + asize);
    cout << "\n\n The array after sorting is : ";
    show(a, asize);
    cout << "\n\nNow, we do the binary search";
    if (binary_search(a, a + 10, 2))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";

    cout << "\n\nNow, say we want to search for 10";
    if (binary_search(a, a + 10, 10))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array\n";

    int x[4]={5,1,3,2};
     int xsize = sizeof(x) / sizeof(x[0]);
    sort(x,x+xsize);
    for(int i=0;i<4;i++)
        cout<<x[i]<<" ";
   if(binary_search(x,x+5,2))
    cout<<"HI"<<endl;
}
