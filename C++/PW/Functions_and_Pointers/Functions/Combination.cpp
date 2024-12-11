// nCr=n!/((n-r)!*r!)
// nPr=n!/(n-r)!

#include<iostream>
using namespace std;

int fact(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,r;
    cout << "Enter n and r : " ;
    cin >> n >> r;
    int nCr=fact(n)/(fact(n-r)*fact(r));
    int nPr=fact(n)/fact(n-r);
    cout << "nCr = " << nCr << endl;
    cout << "nPr = " << nPr ;
    return 0;
}