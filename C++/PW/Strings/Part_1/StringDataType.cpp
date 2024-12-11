#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="Hello World";
    cout << str[0] << endl;

    // string s;
    // cin >> s;
    // cout << s << endl; //-----> Print only one word not sentence.

    string name;
    getline(cin,name);
    cout << name <<endl;
    return 0;
}