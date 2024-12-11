// Left Rotation by D place

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include <set>
using namespace std;

// void leftRotation(vector <int>& a,int D){
//     int n=a.size();
//     D=D%n;
//     reverse(a.begin(),a.begin()+D);
//     reverse(a.begin()+D,a.end());
//     reverse(a.begin(),a.end());
// }

void leftRotation(vector <int>& a,int D){
    int n=a.size();
    vector <int> temp;
    for(int i=0;i<D;i++){
        temp.push_back(a[i]);
    }

    for(int i=0;i<D;i++){
        temp.push_back(a[i]);
    }

    for(int i=0;i<D;i++){
        temp.push_back(a[i]);
    }
}

int main(){
    vector <int> a={1,2,3,4,5};
    int D=8;

    leftRotation(a,D);
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] << " ";
    }
    return 0;
}