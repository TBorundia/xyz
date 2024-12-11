#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include <set>
using namespace std;

int maximumConsecutiveOnes(vector <int>& a){
    int n=a.size();
    int cnt=0,max_cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            cnt++;
            max_cnt=max(max_cnt,cnt);
        }
        else{
            cnt=0;
        }
    }
    return max_cnt;
}

int main(){
    vector <int> a={1,1,0,1,1,1,0,0,1,1};

    cout << maximumConsecutiveOnes(a);
    return 0;
}