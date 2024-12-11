// 1 2 3 4
// 1 2 3
// 1 2
// 1



#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "n : ";
    cin >> n ;
    for(int i=1;i<=n;i++)
    {
        int k=1;
        for(int j=1;j<=n-i+1;j++)
        {
            cout << k;
            k++;
        }
        cout << endl;
    }
    
    return 0;
}