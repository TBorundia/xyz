// Given a sorted integer array and an integer 'x', find the upper bound of x.
//Linear Search
#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,4,5,9,15,18,21,24};
    int x=20;
    for(int i=0;i<9;i++)
    {
        if(a[i]>x)
        {
            cout << a[i];
            break;
        }
    }
    return 0;
}