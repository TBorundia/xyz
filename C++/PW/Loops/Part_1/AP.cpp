#include<iostream>
using namespace std;
int main() 
{
    int n,a,d;
    cout << "n : " ;
    cin >> n ;
    cout << "First  : " ;
    cin >> a ;
    cout << "Common difference : " ;
    cin >> d ;
    for(int i=1;i<=n;i++)
    {
        int AP = a+(i-1)*d;
        cout << AP << endl;
    }
    return 0;
}
 