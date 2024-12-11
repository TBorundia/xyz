// * * * * * * * 
// * * *   * * *
// * *       * *
// *           *
// n=4

#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout << "n : " ;
    cin >> n ;
    for(int j=1;j<=2*n-1;j++)
    {
        cout << "*" ;
    }
    cout << endl ;
    int m=n-1;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m-i+1;j++)
        {
            cout << "*" ;
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout << " " ;
        }
        for(int j=1;j<=m-i+1;j++)
        {
            cout << "*" ;
        }
        cout << endl;
    }
    return 0;
}
