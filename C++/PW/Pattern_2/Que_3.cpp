//       1
//     1 2 1 
//   1 2 3 2 1
// 1 2 3 4 3 2 1


#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout << "n : " ;
    cin >> n ;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout << " ";
        }
        for(int j=1;j<=i;j++)
        {
            cout << j;
        }
        int k=i-1;
        for(int j=2;j<=i;j++)
        {
            cout << k;
            k--;
        }
        cout << endl;
    }
    return 0;
}
