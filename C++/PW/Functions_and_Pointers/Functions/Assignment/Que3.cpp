// Q3: Given two numbers a and b, write a function to print all odd numbers between them.


#include<iostream>
using namespace std;
void odd(int a, int b)
{
    if(a>b)
    {
        odd(b,a);
        return;
    }
    for(int i=a;i<=b;i++)
    {
        if(i % 2 != 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int a,b;
    cout << "Enter a and b : ";
    cin >> a >> b;
    odd(a,b);
    return 0;
}