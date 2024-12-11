#include<iostream>
using namespace std;
void greet()
{
    cout << "Good Morning";
}
int product(int a,int b)
{
    return (a*b);
}
int main()
{
    cout << product(2,4) << endl;
    greet();
    return 0;
}