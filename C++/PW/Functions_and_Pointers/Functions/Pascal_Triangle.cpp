
//       1 
//      1  1
//    1   2 1
//  1   3  3  1 
// 1  4  6  4  1
//1  5 10 10  5  1

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

int combination(int n,int r)
{
    int nCr=fact(n)/(fact(n-r)*fact(r));
    return nCr;
}
int main()
{
    int n,r;
    cout << "Enter n : " ;
    cin >> n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int c = combination(i,j);
            cout << c << " ";
        }
        cout << endl ;
    }
    return 0;
}