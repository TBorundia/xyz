//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n ;
    for (int i=1; i<=n ;i++)
    {
        for (int j=1; j<=n-i ;j++)
        {
            cout << " " ;
        }
        int k=i;
        for (int j=1; j<=i ;j++)
        {
            cout << k ;
            k--;
        }
        int m=2;
        for (int j=2; j<=i ;j++)
        {
            cout << m ;
            m++;
        }
        cout << endl;
    }
    return 0;
}