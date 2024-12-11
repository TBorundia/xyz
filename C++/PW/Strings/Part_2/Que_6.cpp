// Input n strings and 
// write a program to find the longest common prefix string of all the strings.
// ["flower","flow","flight"]-------> "fl"

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector <string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");

    // v.push_back("cgrg");
    // v.push_back("rxxe");
    // v.push_back("xrt");

    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << endl;
    }
    cout <<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << endl;
    }
    cout <<endl;
    // Only need to compare 1st and last element after sorting

    int n =v.size();
    string s1=v[0];
    string s2=v[n-1];
    string s3="";
    for(int i=0;i<(min(s1.length(),s2.length()));i++)
    {
        if(s1[i]==s2[i])
        {
            s3=s3+s1[i];
        }
    }
    cout << s3 << endl;
    return 0;
}