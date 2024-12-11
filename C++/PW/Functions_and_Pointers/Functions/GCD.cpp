#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    int hcf=1;
    for(int i=min(a,b) ; i>=1 ; i--)        //min of a,b ----> 1
    {
        if(a%i==0 && b%i==0)   //Common Divisor
        {
            hcf=i;
            break;
        }
    }
    return hcf;
}
int main()
{
    int a,b;
    cout << "Enter two numbers : " << endl;
    cin >> a >> b ;
    int g=gcd(a,b);
    cout << "GCD = " << g << endl;
    return 0;
}