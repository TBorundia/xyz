// 153
// 1^3 + 5^3 + 3^3 =153
// 153 , 371 , 407

#include<iostream>
using namespace std;
int main()
{
    int n, rem;
    int sum=0;
    cout << "Enter a Number : " ;
    cin >> n ;
    int original=n;
    while(n>0)
    {
        rem = n % 10;
        sum = sum + (rem*rem*rem);
        n=n/10;
    }
    if(original == sum)
    {
        cout << "Armstrong Number" ;
    }
    else
    {
        cout << "Not a Armstrong Number" ;
    }
    return 0;
}