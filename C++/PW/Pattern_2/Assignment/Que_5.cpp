// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1


#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout << "n : " ;
    cin >> n ;
    int k=1;
    for(int i=1;i<=n;i++)
    {
        cout << k;
        if(k==n)
        {
            break;
        }
        k++;
    }
    for(int i=1;i<=n-1;i++)
    {
        k--;
        cout << k;
        
    }
    cout << endl;
    for(int i=1;i<=n;i++)
    {
        int k=1;
        for(int j=1;j<=n-i;j++)
        {
            cout << k ;
            k++;
        }
        k=k-1;
        for(int j=1;j<=2*i-1;j++)
        {
            cout << " ";
        }
        for(int j=1;j<=n-i;j++)
        {
            cout << k ;
            k--;
        }
        cout << endl;
    }
    return 0;
}