#include<iostream>
using namespace std;
int main() 
{
    int a[]={1,3,2,5,6};
    int *p = a;
    cout << p << endl;
    // cout << p[1] << endl;
    for(int i=0;i<5;i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
    for(int i=0;i<5;i++)
    {
        cout << *p<< " ";
        *p++;
    }
    return 0;
}