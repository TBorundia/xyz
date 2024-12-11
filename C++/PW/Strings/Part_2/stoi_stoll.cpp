// stoi ----> String to integer
// stoll --->String to long long 

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="12345";
    int x = stoi(s);
    cout << x << endl;
    cout << x+2 << endl;
    
    string s1="123456789101112";
    long long y = stoll(s1);
    cout << y << endl;
    cout << y+2 << endl;
    return 0;
}