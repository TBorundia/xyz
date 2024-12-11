#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter two numbers : " << endl;
    cin >> a >> b ;
    cout << "a = " << a << endl ;
    cout << "b = " << b << endl ;
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "After Swaping : " << endl ;
    cout << "a = " << a << endl ;
    cout << "b = " << b << endl ;
    return 0;
}