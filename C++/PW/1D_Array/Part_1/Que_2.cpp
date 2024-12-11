// Count the number of elements in given array greater than a given number x.

#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int count=0;
    cout << "Enter n : " ;
    cin >> n ;
    int a[n];
    cout << "Enter Element in the array : ";
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int x;
    cout << "Enter x : " ;
    cin >> x ;

    for(i=0;i<n;i++)
    {
        if(a[i]>x)
        {
            count++ ;
        }
    }
    cout << "Number of elements Greater than are " << count << endl ;
    return 0;
}