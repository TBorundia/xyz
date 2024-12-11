// 1 2 3 4 5 6 7 
// 1 2 3   5 6 7
// 1 2       6 7
// 1           7
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
        cout << j ;
    }
    cout << endl ;
    int m=n-1;
    for(int i=1;i<=m;i++)
    {
        int a=1;
        for(int j=1;j<=m-i+1;j++)
        {
            cout << a ;
            a++;
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout << " " ;
            a++;
        }
        for(int j=1;j<=m-i+1;j++)
        {
            cout << a ;
            a++;
        }
        cout << endl;
    }
    return 0;
}
