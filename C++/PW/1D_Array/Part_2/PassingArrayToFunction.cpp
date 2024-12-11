#include<iostream>
using namespace std;
void display(int n,int a[])
{
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
}
void change(int n,int a[])
{
    a[0]=100;
}
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
    display(n,a);
    change(n,a);
    cout << " Array After change : " << endl;
    display(n,a);
    return 0;
}