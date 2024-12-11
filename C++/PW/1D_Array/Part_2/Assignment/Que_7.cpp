// if an array 'a' contains n elements, 
//     then check if the given array is a palindrome or not .

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
    
    int i=0;
    int j=n-1;
    bool flag=true;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            flag=false;
        }
        i++;
        j--;
    }
    if(flag==true)
    {
        cout << " Palindrome";
    }
    else
    {
        cout << "Not Palindrome" ;
    }
    cout << endl;
    return 0;
}