// WAP to print reverse of a given number.

#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout << "n : " ;
    cin >> n ;
    
    int rev=0;
    while(n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout << "Reverse of a number = " << rev;
    return 0;
}