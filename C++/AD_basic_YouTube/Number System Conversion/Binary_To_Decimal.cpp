#include<iostream>
using namespace std;
int main()
{
    int n, rem;
    int sum=0;
    int i=1;
    cout << "Enter Binary Number : " ;
    cin >> n ;
    while(n>0)
    {
        rem = n % 10;
        sum=sum+(i*rem);
        n=n/10;
        i=i*2;
    }
    cout << sum << endl ;
    return 0;
}