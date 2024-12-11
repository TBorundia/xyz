//    1
//   2 2
//  3   3
// 4     4
// n=4


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
        for(int j=1;j<=n;j++)
        {
            if((i+j)==(n+1))
            {
                cout << i;
            }
            else
            {
                cout << " ";
            }
        }
        for(int j=1;j<=n-1;j++)
        {
            if(j==i-1)
            {
                cout << i;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}