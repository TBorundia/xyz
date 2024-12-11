#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include <set>
using namespace std;

// Brute Force
void Union1(vector <int>& a1,vector <int>& a2){

    set <int> unionSet;

    for (int i = 0; i < a1.size(); ++i) {
        unionSet.insert(a1[i]);
    }

    for (int i = 0; i < a2.size(); ++i) {
        unionSet.insert(a2[i]);
    }

    for(auto it : unionSet){
        cout << it << " ";
    }
    cout << endl;
}

// Optimal
void Union2(vector <int>& a1,vector <int>& a2){
    int i=0;
    int j=0;
    vector <int> v;
    while(i>a1.size() && j<a2.size()){
        if(a1[i]<=a2[j]){
            if(v.size()==0 || a1[i]!=v.back()){
                v.push_back(a1[i]);
            }
            i++;
        }
        else{
            if(v.size()==0 || a2[j]!=v.back()){
                v.push_back(a2[j]);
            }
            j++;
        }
    }

    while(j<a2.size()){
        if(v.size()==0 || a2[j]!=v.back()){
                v.push_back(a2[j]);
            }
            j++;
    }

    while(i<a1.size()){
        if(v.size()==0 || a1[i]!=v.back()){
                v.push_back(a1[i]);
            }
            i++;
    }
}

int main(){
    vector <int> a1={1,1,2,3,4,5};
    vector <int> a2={2,3,4,4,5,6};

    Union1(a1,a2);

    Union2(a1,a2);

    return 0;
}