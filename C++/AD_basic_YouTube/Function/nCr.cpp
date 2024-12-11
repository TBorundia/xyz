// nCr= n!/(n-r)!*r!


#include<iostream>
using namespace std;
int fact(int n)
{
    int f=1;
    for(int i=1; i<=n ;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n ;
    cout << "Enter n : " ;
    cin >> n ;
    int r ;
    cout << "Enter r : " ;
    cin >> r ;
    int nCr=fact(n)/(fact(n-r)*fact(r));
    cout << "nCr= " << nCr;
    return 0;
}