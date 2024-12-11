#include<iostream>
using namespace std;
class stack{
public:
    int a[5];
    int idx=-1;

    void display(){
        for(int i=0;i<=idx;i++){
            cout << a[i] << " ";
        }
    }

    void push(int n){
        idx++;
        a[idx]=n;
    }

    int top(){
        return a[idx];
    }

    int size(){
        return idx+1;
    }

    void pop(){
        idx--;
    }
}; 

int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.display();
    cout << endl;
    cout << st.top() << endl;
    cout << st.size() << endl;

    st.pop();
    st.pop();

    cout << st.top() << endl;
    cout << st.size() << endl;
    st.display();
    return 0;
}