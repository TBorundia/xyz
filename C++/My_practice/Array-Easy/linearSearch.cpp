#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include <set>
using namespace std;


int linearSearch(vector <int>& a, int target){
    int n=a.size();
    for (int i = 0; i < n; ++i){
        if(a[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    vector <int> a={1,0,2,3,2,0,0,4,5,1};
    int target=4;
    cout << linearSearch(a,target);
    return 0;
}