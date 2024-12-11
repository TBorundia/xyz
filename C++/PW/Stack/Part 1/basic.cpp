#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack <int> st ;
    cout << st.size() << endl;
    st.push(10); //Add element
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << st.size() << endl;
    st.pop(); //Remove element
    cout << st.size() << endl;

    cout << "To print stack in reverse order " << endl;
    stack <int> temp ;
    while(st.size()>0){
        cout << st.top() << " ";
        temp.push(st.top());
        st.pop();
    }
    cout << endl;

    cout << "To print stack " << endl;
    while(temp.size()>0){
        cout << temp.top() << " ";
        st.push(temp.top());
        temp.pop();
    }
    return 0;
}