#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include <set>
using namespace std;

int missingNumber(vector <int>& a){
    int n=a.size();
    int Xor=0;
    
    for(int i=0;i<n;i++){
        Xor=Xor^a[i];
    }

    int Txor=0;
    for(int i=1;i<=n+1;i++){
        Txor=Txor^i;
    }
    return Xor^Txor;
}

int main(){
    vector <int> a={1,2,3,4,7,6,8};

    cout << missingNumber(a);
    return 0;
}