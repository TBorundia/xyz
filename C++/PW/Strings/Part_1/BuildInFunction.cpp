#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s="Tina Borundia";
    cout << s << endl;
    
    // Find Size of string
    cout << "Size : "<< s.length() << endl;

    // Add element at end
    s.push_back('e');
    cout << s << endl;

    //+ Operator
    string a="Hello ";
    string b="World ";
    string c="12345";
    cout << a+b+c << endl;

    //Reverse of String
    string s1="Hello";
    cout << s1 << endl;
    reverse(s1.begin(),s1.end());
    cout << s1 << endl;
    return 0;
} 