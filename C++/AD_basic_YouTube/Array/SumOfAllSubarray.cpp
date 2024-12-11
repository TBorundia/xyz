//Given an array a[] of size n.
// Output sum of each subarray of the given array.

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : " << endl;
    cin >> n ;

    int a[n];
    cout << "Enter Elements in a array : " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> a[i] ;
    }

    cout << "Required sum is : " << endl;
    for(int i=0; i<n; i++)
    {
        int sum=0;
        for(int j=i; j<n; j++)
        {
            sum=sum+a[j];
            cout << sum << endl ;
        }
    }
    return 0;
}