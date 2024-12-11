// Next Greater Element
 #include<iostream>
 #include<stack>
 #include<vector>
 using namespace std;
 int main(){
    stack <int> st;
    vector <int> v={4,1,2,5,4,3,4,8,2,7};
    int n=v.size();

    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
    cout << endl;

    vector <int> ans(n);
    ans[n-1]=-1;
    st.push(v[n-1]);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && v[i]>=st.top()){
            st.pop();
        }

        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();

        st.push(v[i]);
    }

    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
 }