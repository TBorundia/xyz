#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,i;
    cout << "n : " ;
    cin >> n ;
    int a[n];
    cout << "Enter elements in array :" ;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout << "max = " << max << endl ;

    int smax=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(a[i]<max && a[i]>smax)
        {
            smax=a[i];
        }
    }
    cout << "second max = " << smax ;
    return 0;
}