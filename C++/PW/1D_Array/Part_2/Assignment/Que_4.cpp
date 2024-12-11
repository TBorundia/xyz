// Find the difference between the sum of elements 
//     at even indices to the sum of elements at odd indices.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "n : " ;
    cin >> n ;
    int a[n];
    cout << "Enter elements in array : " << endl;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cout << "Array is : " << endl;
    for (int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    
    int even=0;
    int odd=0;
    for (int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            even=even+a[i];
        }
        else
        {
            odd=odd+a[i];
        }
    }
    cout << "the difference between the sum of elements at even indices to the sum of elements at odd indices : " << even-odd << endl;
    return 0;
}