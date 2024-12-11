// write a function to find out the first and last digit of a number 
//        without returning anything.

#include<iostream>
using namespace std;
void find(int n,int *p1,int *p2)
{
    *p2=n%10;  //last digit
    while(n>0)
    {
        *p1=n%10;
        n=n/10;
    }
}
int main() 
{
    int n;
    // Normal using loop---->
    // cout << "Enter n = ";
    // cin >> n;
    // int first,last;
    // last=n%10;
    // while(n>0)
    // {
    //     first=n%10;
    //     n=n/10;
    // }
    // cout << "first = " << first << endl;
    // cout << "last = " << last << endl;

    cout << "Enter n = ";
    cin >> n;
    int first,last;
    int *p1=&first, *p2=&last;
    find(n,p1,p2);
    cout << "first = " << first << endl;
    cout << "last = " << last << endl;

    return 0;
}