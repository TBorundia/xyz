// Given two string s and t , 
// return true if t is an anagram of s, and false otherwise. 
//    INPUT: s=physciswallah, t=wallahphysics  
//    OUTPUT: YES

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s,t;
    cout << "Enter the string 1 :" << endl;
    getline(cin,s) ;
    cout << "Enter the string 2 :" << endl;
    getline(cin,t) ;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end()); 
    if(s==t)
    {
        cout << true <<endl;
    }
    else{
        cout << false <<endl;
    }
    return 0;
}  