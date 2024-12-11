#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int largestEle1(vector <int>& a){
    sort(a.begin(),a.end());
    return a[a.size()-1];
}

int largestEle2(vector <int>& a){
    int res=a[0];
    for(int i=1;i<a.size();i++){
        res=max(res,a[i]);
    }
    return res;
}

int main(){
    vector <int> a={8,7,6,5,9,3,4,1,2,1};
    cout << largestEle1(a) << endl;
    cout << largestEle2(a) << endl;
}