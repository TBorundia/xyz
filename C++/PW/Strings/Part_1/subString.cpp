#include<iostream>
#include<string>
using namespace std;
int main()
{ 
    string s="Tina Borundia";
    cout << s.substr(2) << endl;
    cout << s.substr(8) << endl;
    cout << s.substr(6,4) << endl;
    return 0;
} 