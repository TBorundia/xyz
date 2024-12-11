// Two numbers are entered.
// Write a program to find the value of a num raised to power of another

#include<iostream>
using namespace std;
int main() 
{
    cout << "a^b" << endl ;
    int a;
    cout << "a : " ;
    cin >> a ;
    int b;
    cout << "b : " ;
    cin >> b ;
    int pow=1;
    for(int i=1;i<=b;i++)
    {
        pow=pow*a;
    }
    cout << a << " ^ " << b << " = " << pow;
    return 0;
}