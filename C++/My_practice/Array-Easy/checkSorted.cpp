#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

bool checkSorted(vector <int>& a){
    for(int i=1;i<a.size();i++){
        if(a[i]>=a[i-1]){
            
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    vector <int> a={8,7,6,5,9,3,4,1,2,1};
    cout << checkSorted(a) << endl;

    vector <int> b={3,4,6,6,6,6,8,9,11};
    cout << checkSorted(b) << endl;
}