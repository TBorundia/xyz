// Print all the odd numbers from 1 to 100.

#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout << "n : " ;
    cin >> n ;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            cout << i << endl;
        }
    }
    
    return 0;
}
 