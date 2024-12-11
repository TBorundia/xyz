#include<iostream>
using namespace std;
int main()
{
    int n,i,key;
    cout << "n : " ;
    cin >> n ;
    cout << "key : " ;
    cin >> key ;
    int a[n];
    cout << "Enter elements in array :" ;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            cout << "Elements is present at :" << i;
            break;
        }
    }
    return 0;
}