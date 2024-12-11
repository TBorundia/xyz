//Input a string of even length and reverse the first half of the string.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{ 
    string s;
    getline(cin,s);
    cout << s << endl;
    int n=s.length();
    reverse(s.begin()+0,s.end()+n/2);
    cout << s << endl;
    return 0;
} 