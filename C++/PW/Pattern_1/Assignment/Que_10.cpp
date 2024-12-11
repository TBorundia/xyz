// 1
// 2 1
// 3 2 1
// 4 3 2 1



#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "n : ";
    cin >> n ;
    for(int i=1;i<=n;i++)
    {
        int a=i;
        for(int j=1;j<=i;j++)
        {
            cout << a;
            a--;
        }
        cout << endl;
    }
    
    return 0;
}