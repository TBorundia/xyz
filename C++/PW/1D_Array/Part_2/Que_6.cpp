// Rotate the array 'a' by k steps, where k is non-negative.
// Note: k can be greater than n as well where n is the size of array 'a'.


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

    int k;
    cout << "k = ";
    cin >> k;

    if(k>n) k=k%n;
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);

    cout <<  "Reverse Array is : " << endl;
    display(v);
    return 0;
}