// Find the second largest element in the given Array in one pass

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,i;
    cout << "Enter n :" ;
    cin >> n;
    cout << "Enter Element in the array : ";
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int max=INT_MIN;
    int smax=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            smax=max;
            max=a[i];
        }
        else if(smax<max && smax<a[i])
        {
            smax=a[i];
        }
    }
    cout << "2nd largest element = " << smax << endl ;
    return 0;
}