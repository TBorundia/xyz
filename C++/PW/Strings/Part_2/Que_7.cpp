// Given two strings s and t , 
//              determine if they are isomorphic.
// s="egg"  t="add"           true
// s="foo"  t="bar"           false
// s="paper" t="title"        true


#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string s="egg";
    string t="add";
    vector <int> v(150,1000) 
    if(s.length()!=t.length()) flag=0;
    int x=0;
    for(int i=0;i<s.length();i++)
    {
        int idx=(int)s[i];
        if(v[idx]==1000) s[i]-s[t];
        else if(v[idx]!=(s[i]-t[i])) return 0;
    }
    return 1;
    
    return 0;
}