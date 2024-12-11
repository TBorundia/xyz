#include<iostream>
using namespace std;
void greet(int n)
{
    if(n==0) return;
    else{
        cout << "GM" << endl;
        greet(n-1);
    }
}
int main()
{
    int n;
    cout << "n : " ;
    cin >> n ;
    greet(n);
    return 0;
}