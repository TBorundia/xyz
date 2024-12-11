#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include <set>
using namespace std;


void Union(vector <int>& a1,vector <int>& a2){

    set <int> unionSet;

    for (int i = 0; i < a1.size(); ++i) {
        unionSet.insert(a1[i]);
    }

    for (int i = 0; i < a2.size(); ++i) {
        unionSet.insert(a2[i]);
    }

    for (int i = 0; i < unionSet.size(); ++i) {
        cout << unionSet[i] << " ";
    }
}

int main(){
    vector <int> a1={1,1,2,3,4,5};
    vector <int> a2={2,3,4,4,5,6};

    Union(a1,a2);
    return 0;
}