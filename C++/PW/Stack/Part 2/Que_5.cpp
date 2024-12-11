//Stock Span Problem

 #include<iostream>
 #include<stack>
 #include<vector>
 using namespace std;
 int main(){
    stack <int> st;
    vector <int> v={100,80,60,81,70,60,75,85};
    int n=v.size();
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
    cout << endl;

    vector <int> ans(n);
    ans[0]=1;
    st.push(v[0]);
    for(int i=1;i<n;i++){
        while(st.size()>0 && st.top()>v[i]){
            st.pop();
        }
        st.push(v[i]);
        ans[i]=st.size();
    }

    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
 }