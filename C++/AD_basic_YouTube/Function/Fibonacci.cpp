#include<iostream>
using namespace std;
void fib(int n)
{
    int t1=0;
    int t2=1;
    int t;
    cout << "Fibonacci Series is " << endl;
    cout << t1 << endl;
    cout << t2 << endl;
    for(int i=1; i<= n; i++)
    {
         t=t1+t2;
         t1=t2;
         t2=t;
         cout << t << endl ;
    }
}
int main()
{
    int n ;
    cout << "Enter n : " ;
    cin >> n ;
    fib(n);
    return 0;
}