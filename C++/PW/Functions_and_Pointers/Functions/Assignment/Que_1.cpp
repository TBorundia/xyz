// Q1 : Write a function to print squares of first n natural numbers, 
// taking n as argument to the function

#include<iostream>
using namespace std;
int s(int i)
{
    return i*i;
}
void square(int n)
{
    for(int i=1; i<=n;i++)
    {
        cout << "Square of " << i << " = " << s(i) << endl;
    }
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    square(n);
    return 0;
}