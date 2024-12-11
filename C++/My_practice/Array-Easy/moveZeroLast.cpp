// Move all zeroes to the end of the array.


#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include <set>
using namespace std;

// Brute Force
void moveZeroes1(vector <int>& a){
    int n=a.size();
    vector <int> temp;
    for (int i = 0; i < n; ++i) {
        if(a[i]!=0){
            temp.push_back(a[i]);
        }
    }

    for (int i = 0; i < temp.size(); ++i){
        a[i]=temp[i];
    }

    for (int i = temp.size(); i < n; ++i){
        a[i]=0;
    }
}

// Optimal
void moveZeroes2(vector <int>& a){
    int n=a.size();

    int j=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }

    for(int i=j+1;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
    }
}

int main(){
    vector <int> a={1,0,2,3,2,0,0,4,5,1};

    // moveZeroes1(a);

    moveZeroes2(a);
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] << " ";
    }
    return 0;
}