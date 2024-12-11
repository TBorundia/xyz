#include<iostream>
using namespace std;
int Add(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    int a ;
    cout << "Enter a : " ;
    cin >> a ;
    int b ;
    cout << "Enter b : " ;
    cin >> b ;
    int sum=Add(a,b);
    cout << "Sum is " << sum ;
    return 0;
}