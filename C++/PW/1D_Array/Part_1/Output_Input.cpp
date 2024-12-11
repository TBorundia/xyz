#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "n : " ;
    cin >> n ;
    int a[n];
    cout << "Enter elements in array :" ;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cout << "Elements in array are :" ;
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}