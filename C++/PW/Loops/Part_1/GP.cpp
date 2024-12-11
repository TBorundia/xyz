#include<iostream>
using namespace std;
int main() 
{
    int n,a,r;
    cout << "n : " ;
    cin >> n ;
    cout << "First  : " ;
    cin >> a ;
    cout << "Common difference : " ;
    cin >> r ;
    int GP=a;
    for(int i=1;i<n;i++)
    {
        cout << GP << endl;
        GP =GP*r;
    }
    return 0;
}