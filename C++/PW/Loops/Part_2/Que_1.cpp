// WAP to check if a number is prime or not

#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout << "n : " ;
    cin >> n ;
    bool flag=true;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            flag=false;
            break;
        }
    }
    if(n==1) cout << "1 is neither prime nor composite" << endl;
    else if(flag==true)
    {
        cout << n << " is prime" << endl;
    }
    else
    {
        cout << n << " is composite" << endl;
    }
    return 0;
}