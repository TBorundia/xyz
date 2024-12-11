#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int flag=0;
    cout <<"Enter a and b :"<< endl;
    cin >> a >> b ;
    cout <<"Prime between a and b :"<< endl;
    for(int i=a ; i<=b ; i++)
    {
        int j;
        for( j=2 ; j<i ; j++)
        {
            if(i % j==0)
            {
                break;
            }
        }
        if(i==j)
        {
            cout << i <<endl;
        }
    }
    return 0;
}