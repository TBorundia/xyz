#include<iostream>
using namespace std;
int main() 
{
    int x;
    cout << "Enter x = ";
    cin >> x;
    int *p=&x;
    cout << "x = " << x << endl;
    cout << "*p = " << *p << endl;
    cout << "p = " << p << endl;
    p=p+1;                            // Address increment with 4 bytes.
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    return 0;
}