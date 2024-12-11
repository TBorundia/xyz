#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    int max=INT_MIN;
    int min=INT_MAX;
    cout << "Enter n : " << endl;
    cin >> n ;

    int a[n];
    cout << "Enter Elements in a array : " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> a[i] ;
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        else if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout << "Maximum= " << max << endl;
    cout << "Minimum= " << min << endl;
    return 0;
}