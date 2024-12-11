// WAP to find the largest three elements in the array.

#include<iostream>
#include<climits>
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
    int max=INT_MIN;
    int smax=INT_MIN;
    int tmax=INT_MIN;
    for (int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for (int i=0;i<n;i++)
    {
        if(a[i]>smax && a[i]<max)
        {
            smax=a[i];
        }
    }
    for (int i=0;i<n;i++)
    {
        if(a[i]>tmax && a[i]<max && a[i]<smax)
        {
            tmax=a[i];
        }
    }
    cout << "the largest three elements in the array : " << endl;
    cout << max << endl ;
    cout << smax << endl ;
    cout << tmax << endl;
    return 0;
}