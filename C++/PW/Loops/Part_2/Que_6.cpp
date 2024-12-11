// Print the sum of this series : 1-2+3-4+5-6.... upto 'n'.

#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout << "n : " ;
    cin >> n ;
    int Sum=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            Sum=Sum+i;
        }
        else
        {
            Sum=Sum-i;
        }
    }
    cout << "Sum of the series = " << Sum;
    return 0;
}