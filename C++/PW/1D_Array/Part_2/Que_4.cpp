// Write a program to reverse the array without using any extra array.


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &a)
{
    for(int i=0;i<a.size();i++)
    {
        cout <<  a[i] << " ";
    } 
    cout << endl;
}
int main() 
{
    int n;
    cout << "n = ";
    cin >> n;
    vector<int> v;
    cout <<  "Enter elements in array : " << endl;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout <<  "Array given : " << endl;
    display(v);
    
    // Using While Loop----->
    // int i=0;
    // int j=v.size()-1;
    // while(i<=j)
    // {
    //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    // }

    // Using For loop------>
    // for(int i=0,j=v.size()-1;i<=j;i++,j--)
    // {
    //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    // }

    // Direct buildIn Function---->
    reverse(v.begin(), v.end());
    cout <<  "Reverse Array is : " << endl;
    display(v);
    return 0;
}