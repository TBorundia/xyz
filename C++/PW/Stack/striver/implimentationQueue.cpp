// INCORRECT-------> Use front and rare

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

    int size(){
        return idx+1;
    }

    void pop(){
        for(int i=0;i<idx;i++){
            a[i]=a[i+1];
        }
        idx--;
    }

    int front(){
        return a[0];
    }

    int rear(){
        return a[idx];
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
    cout << st.size() << endl;
    cout << st.front() << endl;
    cout << st.rear() << endl;

    st.pop();
    st.pop();

    cout << st.size() << endl;
    st.display();
    return 0;
}