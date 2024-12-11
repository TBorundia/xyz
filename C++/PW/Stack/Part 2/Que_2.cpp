// Remove consecutive Duplicates in a string
// aaabbcaaff ----> abcaf

#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

string duplicate(string s){
    stack <char> st;
    st.push(s[0]);
    string t="";
    for(int i=1;i<s.length();i++){
        if(st.top()!=s[i]){
            st.push(s[i]);
        }
    }
    while(st.size()>0){
        t=t+st.top();
        st.pop();
    }
    reverse(t.begin(),t.end());
    return t;
}

int main(){
    string s="aaaabbcaafff";
    cout << s << endl;
    s = duplicate(s);
    cout << s << endl;
    return 0;
}