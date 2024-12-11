// S.C. ---->O(n) stack frames
// T.C. ---->O(n)

#include<iostream>
using namespace std;
int factorial(int n)
{
    int f;
    if(n==1 || n==0) return 1;
    else 
    {
        f=n*factorial(n-1);
    }
    return f;
}
int main()
{
    int n;
    cout << "n : " ;
    cin >> n ;
    int f=factorial(n);
    cout << f;
    return 0;
}