// Calculate the product of all the elements in the given array.

#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout << "Enter n :" ;
    cin >> n;
    cout << "Enter Element in the array : ";
    int a[n];
    int pro=1;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        pro=pro*a[i];
    }
    cout << "Product = " << pro;
    return 0;
}