#include<iostream>
using namespace std;
Swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main() 
{
    int a,b;
    cout << "Enter a = ";
    cin >> a;
    cout << "Enter b = ";
    cin >> b;
    cout << "a = " << a << " b = " << b << endl;
    Swap(a,b);
    cout << "a = " << a << " b = " << b;
    return 0;
}