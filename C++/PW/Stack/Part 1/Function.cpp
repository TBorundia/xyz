#include<iostream>
#include<stack>
using namespace std;

void printStack(stack <int>& st){
    stack <int> temp ;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    cout << endl;
    while(temp.size()>0){
        cout << temp.top() << " ";
        st.push(temp.top());
        temp.pop();
    }
    cout << endl;
}

void pushAtBottom(stack <int>& st, int val){
    stack <int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}

void pushAtIndex(stack <int>& st , int val, int idx){
    stack <int> temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}

void displayRev(stack <int>& st){
    if(st.size()==0) return;
    cout << st.top() << " ";
    st.pop();
    displayRev(st);
    // st.push(st.top());
}

int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << "To insert at bottom : ";
    pushAtBottom(st,100);
    printStack(st);

    cout << "To insert at index : ";
    pushAtIndex(st,500,3);
    printStack(st);

    cout << "Print Reverse Recursively : ";
    displayRev(st);
    return 0;
}