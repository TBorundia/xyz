#include<iostream>
using namespace std;
void facto(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
        cout << i << "! = " << fact << endl;
    }
}
int main()
{
    int n;
    cout << "Enter n : " << endl;
    cin >> n ;
    facto(n);
    return 0;
}