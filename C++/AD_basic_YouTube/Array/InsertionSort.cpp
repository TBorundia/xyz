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
    for(int i=1; i<n; i++)
    {
        int j=i;
        while((j>=1) && (a[j]<a[j-1]))
        {
            int temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
    cout << "Sorted array : " << endl;
    for(int i=0; i<n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}