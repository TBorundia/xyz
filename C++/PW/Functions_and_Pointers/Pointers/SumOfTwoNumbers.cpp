#include<iostream>
using namespace std;
int main() 
{
    int a,b;
    int *p1=&a;
    int *p2=&b;
    cout << "Enter first = ";
    cin >> *p1;
    cout << "Enter second = ";
    cin >> *p2;
    cout << "Sum = " << *p1+*p2 << endl;
    cout << "Sum = " << a+b;
    return 0;
}
