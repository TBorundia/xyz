// n=4
// 1 1 1 1 1 1 1
// 1 2 2 2 2 2 1
// 1 2 3 3 3 2 1
// 1 2 3 4 3 2 1
// 1 2 3 3 3 2 1
// 1 2 2 2 2 2 1
// 1 1 1 1 1 1 1

#include<iostream>
#include<climits>
using namespace std;
int main() 
{
    int n;
    cout << "n : " ;
    cin >> n ;
    cout << endl ;
    for(int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            int a=i;
            int b=j;
            if(a>n) a=2*n-i;
            if(b>n) b=2*n-j;
            cout << min(a,b);
        }

        cout << endl;
    }
    return 0;
}
