//       A
//     A B C
//   A B C D E
// A B C D E F G


#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout << "n : " ;
    cin >> n ;
    for(int i=1;i<=n;i++)
    {
        char a='A';
        for(int j=1;j<=n-i;j++)
        {
            cout << " " ;
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout << a;
            a++;
        }
        cout << endl;
    }
    return 0;
}