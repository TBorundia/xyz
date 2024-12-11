// Input a string of even length and 
//     return the second half of that string inbuilt substr function.

#include<iostream>
#include<string>
using namespace std;
int main()
{ 
    string s;
    cout << "Enter a string : " << endl;
    cin >> s ;
    cout << s << endl;

    int n=s.length();
    cout << s.substr(n/2);
    return 0;
} 