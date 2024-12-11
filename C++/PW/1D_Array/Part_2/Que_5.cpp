// Write a program to reverse the array without using any extra array.


#include<iostream>
#include<vector>
using namespace std;
void reversePart(int i,int j,vector<int> &v)
{
    while(i<=j)
    {
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
    }
    return;
}
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
    
    reversePart(1,3,v);
    cout <<  "Reverse Array is : " << endl;
    display(v);
    return 0;
}