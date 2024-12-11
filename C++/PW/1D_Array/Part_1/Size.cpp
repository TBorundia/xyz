#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10,11,11,13,14,15};
    int n=sizeof(a)/sizeof(a[0]);
    cout << n ;
    return 0;
}