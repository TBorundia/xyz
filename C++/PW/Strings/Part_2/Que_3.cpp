// Given a string consisting of lowercase English alphabets.
// Print the character that is occuring most number of times.

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string :" << endl;
    getline(cin,s) ;
    vector <int> a(26,0);
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        int ascii =(int)ch;
        a[ascii-97]++;
    }
    int max=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]==max)
        {
            int ascii=i+97;
            char ch=(char)ascii;
            cout << ch << " "<< max << endl;
        }
    }
    return 0;
}  