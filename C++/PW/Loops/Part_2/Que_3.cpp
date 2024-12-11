// WAP to count digits of a given number.

#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout << "n : " ;
    cin >> n ;
    int count=0;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    cout << "Number of digit = " << count;
    return 0;
}