// A B C D E F G
// A B C   E F G
// A B       F G
// A           G


#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout << "n : " ;
    cin >> n ;
    char b='A';
    for(int i=1;i<=2*n-1;i++)
    {
        cout << b;
        b++;
    }
    cout << endl;
    for(int i=1;i<=n;i++)
    {
        char a='A';
        for(int j=1;j<=n-i;j++)
        {
            cout << a ;
            a++;
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout << " ";
            a++;
        }
        for(int j=1;j<=n-i;j++)
        {
            cout << a ;
            a++;
        }
        cout << endl;
    }
    return 0;
}