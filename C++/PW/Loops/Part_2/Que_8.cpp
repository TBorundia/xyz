// Print the nth fibonacci series.

#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout << "n : " ;
    cin >> n ;
    int t1=1,t2=1;
    cout << t1 << endl <<t2 << endl;
    for(int i=3;i<=n;i++)
    {
        int t3=t1+t2;
        t1=t2;
        t2=t3;
        cout << t3 << endl;
    }
    return 0;
}