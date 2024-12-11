// Given an array of integers, 
//   change the value of all odd indexed elements to its second multiple 
//     and increment all even indexed values by 10.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "n : " ;
    cin >> n ;
    int a[n];
    cout << "Enter elements in array : " << endl;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cout << "Array is : " << endl;
    for (int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    
    for (int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            a[i]=a[i]+10;
        }
        else
        {
            a[i]=2*a[i];
        }
    }
    cout << "The required array is :" << endl;
    for (int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}