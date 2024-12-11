// Write a program to copy the contents of one array into another in the reverse order.


#include<iostream>
#include<vector>
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
    vector <int> v2(v.size());
    for(int i=0;i<n;i++)
    {
        int j=v2.size()-i-1;        // i + j = size - 1
        v2[i]=v[j];
    }
    cout <<  "Reverse Array is : " << endl;
    display(v2);
    return 0;
}