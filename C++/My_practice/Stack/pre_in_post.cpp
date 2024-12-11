#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
int (string s){
    stack <char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else{
            if (st.empty()) {
                return false;
            }
            if ((s[i] == ')' && st.top() == '(') ||
                (s[i] == '}' && st.top() == '{') ||
                (s[i] == ']' && st.top() == '[')) {
                st.pop();
            } 
            else {
                return false;
            }
        }
    }
    return st.empty();
}

int main(){
    string s="{()()}";
    cout << balanced(s) << endl;
}