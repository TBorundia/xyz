#include<iostream>
using namespace std;
int main()
{
    int n, rem;
    int sum=0;
    int i=1;
    cout << "Enter Octal Number : " ;
    cin >> n ;
    while(n>0)
    {
        rem = n % 10;
        sum=sum+(i*rem);
        n=n/10;
        i=i*8;
    }
    cout << sum << endl ;
    return 0;
}