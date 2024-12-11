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
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout << "Sum = " << sum ;
    return 0;
}