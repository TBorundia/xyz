//       A
//     B A B
//   C B A B C 
// D C B A B C D


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
            cout << "  " ;
        }
        for(int j=i;j>=1;j--)
        {
            cout << (char)(j+64)<< " " ;
        }
        for(int j=2;j<=i;j++)
        {
            cout << (char)(j+64) << " ";
        }
        cout << endl;
    }
    return 0;
}