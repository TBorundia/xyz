#include<iostream>
using namespace std;
int main()
{
    int n, rem;
    int rev=0;
    cout << "Enter a Number : " ;
    cin >> n ;
    while(n>0)
    {
        rem = n % 10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout << rev << endl ;
    return 0;
}