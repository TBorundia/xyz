// Count the number of elements strictly greater than x.

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

    int x;
    cout << "x : " ;
    cin >> x ;

    cout << "Array is : " << endl;
    for (int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int count=0;
    for (int i=0;i<n;i++)
    {
        if(a[i]>x)
        {
            count++;
        }
    }

    cout << "The number of elements strictly greater than x : " << count << endl;
    return 0;
}