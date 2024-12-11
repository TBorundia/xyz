#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter two numbers : " << endl;
    cin >> a >> b ;
    cout << "a = " << a << endl ;
    cout << "b = " << b << endl ;
    int temp=a;
    a=b;
    b=temp;
    cout << "After Swaping : " << endl ;
    cout << "a = " << a << endl ;
    cout << "b = " << b << endl ;
    return 0;
}