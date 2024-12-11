// Input a string of size n and 
//  update all the even positions in the string to character 'a'. 
//   Consider 0-based indexing
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="Tina Borundia";
    cout << s << endl;
    int i=0;
    while(s[i]!='\n')
    {
        if(i%2==0) s[i]='a';
        i++;
    }
    cout << s << endl;
    return 0;
}