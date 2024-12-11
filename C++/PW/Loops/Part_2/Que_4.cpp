// WAP to print sum of digits of a given number.

#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout << "n : " ;
    cin >> n ;
    
    int sum=0;
    while(n>0)
    {
        int rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    cout << "Sum of digit = " << sum;
    return 0;
}