// Given a sentence , split every single word of the sentence and 
//     print in a new line.

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main()
{
    string s="I am happy     today";
    stringstream ss(s);
    string temp;
    while(ss >> temp)
    {
        cout << temp << endl;
    }
    return 0;
}