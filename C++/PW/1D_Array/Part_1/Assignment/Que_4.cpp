// Given an array, predict if the array contains duplicates or not.

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
    int flag = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                flag=1;
                cout << "Duplicate is " << a[i] << endl ;
                break;
            }
        }
    }
    if(flag==0) cout <<" No duplicate";
    return 0;
}
