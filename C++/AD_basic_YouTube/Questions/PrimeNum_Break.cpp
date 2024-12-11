#include<iostream>
using namespace std;
int main()
{
    int n,flag=0;
    cout << "Enter n : "<< endl;
    cin >> n ;
    for(int i=2 ; i<=n-1 ; i++)
    {
        if(n % i==0)
        {
            cout << n << " is not prime";
            flag=1;
            break;
        }
    }
    if(flag!=1)
    {
        cout << n << " is prime" << endl;
    }
    return 0;
}