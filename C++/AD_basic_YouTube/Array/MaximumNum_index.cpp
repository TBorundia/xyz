//Given an array a[] of size n. 
//For every i from 0 to n-1 output max(a[0],a[1],.....,a[i]).

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int mx=-19999999;
    int n;
    cout << "Enter n : " << endl;
    cin >> n ;

    int a[n];
    cout << "Enter Elements in a array : " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> a[i] ;
    }

    cout << "Required array is : " << endl;
    for(int i=0; i<n; i++)
    {
        mx = max(mx,a[i]);
        cout << mx << endl;
    }
    return 0;
}