// Find the minimum value out of all elements in the array.

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
    int min=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout << "min = " << min ;
    return 0;
}