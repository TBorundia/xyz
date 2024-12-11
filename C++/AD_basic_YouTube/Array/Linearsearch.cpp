#include<iostream>
using namespace std;
int linSearch(int a[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    return -1;
}
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
    int key;
    cout << "Enter key : " << endl;
    cin >> key ;

    int l=linSearch(a,n,key);
    if(l==-1)
    {
        cout << "Element is not present " ;
    }
    else
    {
        cout << "Element is at postion " << l ;
    }
    return 0;
}