// Given n string consisting of digits from 0 to 9.
// Return the index of string which has maximum value.
//    (Take 0 based indexing)
// INPUT: 0123, 0023, 456, 00182, 940, 2901
// Output: 5

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a[]={"0123", "0023", "456", "00182", "940", "2901"};
    int max=stoi(a[0]);
    for(int i=1;i<6;i++)
    {
        int x=stoi(a[i]);
        if(x>max) max=x;
    }
    cout << max << endl;
    return 0;
}