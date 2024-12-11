// Find the unique number in a given Array where all the elements are 
//    being repeated twice with one value being unique.

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
        bool flag=true;
        for (int j=i+1;j<n;j++)
        {
            if(i==j) continue;
            if(a[i]==a[j])
            {
                flag=false ;
                break;
            }
        }
        if(flag==true)
        {
            cout << "The unique value in array is : "<< a[i] << endl;
            break;
        }
    }
    return 0;
}