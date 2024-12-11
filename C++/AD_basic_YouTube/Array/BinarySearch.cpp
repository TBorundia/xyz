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
    int key;
    cout << "Enter key : " << endl;
    cin >> key ;

    int first,last,mid;
    first=0;
    last=n-1;
    mid=(first+last)/2;
    while(first<=last)
    {
        if(a[mid]<key)
        {
            first=mid+1;
        }
        else if(a[mid]==key)
        {
            cout << "key is at " << mid;
            break;
        }
        else
        {
            last=mid-1;
        }
        mid=(first+last)/2;
    }
    if(first>last)
    {
        cout << "Element is not present" << endl;
    }
    return 0;
}