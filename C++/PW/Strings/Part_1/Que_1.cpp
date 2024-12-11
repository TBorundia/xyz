// Input a string of length n and 
//      count all the vowels in the given string.

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="Tina Borundia";
    int i=0;
    int count=0;
    while(s[i]!='\0')
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'|| s[i]=='o'|| s[i]=='u')
        {
            count++;
        }
        i++;
    }
    cout <<"No. of vowel : " <<count;
    return 0;
}