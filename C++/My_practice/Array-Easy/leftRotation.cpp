// Left Rotation by 1 place

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include <set>
using namespace std;

void leftRotation(vector <int>& a){
    int temp=a[0];
    int n=a.size();
    for(int i=1;i<n;i++){
        a[i-1]=a[i];
    }
    a[n-1]=temp;
}

int main(){
    vector <int> a={1,2,3,4,5,6};

    leftRotation(a);
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] << " ";
    }
    return 0;
}