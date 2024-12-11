// Remove duplicate from sorted array

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include <set>
using namespace std;

// void removeDuplicate(vector <int>& a){
//     set<int> st;
//     for(int i=0;i<a.size();i++){
//         st.insert(a[i]);
//     }

//     a.clear();
//     for(auto i:st){
//         a.push_back(i);
//     }
// }

void removeDuplicate(vector <int>& a){
    int i=0;
    for(int j=1;j<a.size();j++){
        if(a[i]!=a[j]){
            a[i+1]=a[j];
            i++;
        }
    }

    for(int j=i+1;j<a.size();j++){
        a[j]=-1;
    }
}

int main(){
    vector <int> a={1,2,2,3,4,4,4,5,5};

    removeDuplicate(a);
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] << " ";
    }
    return 0;
}