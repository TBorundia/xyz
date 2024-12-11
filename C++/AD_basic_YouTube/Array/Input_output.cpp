#include<iostream>
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

    cout << "Elements in a array are : " << endl;
    for(int i=0; i<n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}