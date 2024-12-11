// Check if the given array is sorted or not

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
    
    for (int i=0;i<n;i++)
    {
        for (int j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                cout << "Not Sorted";
                return 0;
            }
        }
    }
    cout << " Sorted";
    return 0;
}