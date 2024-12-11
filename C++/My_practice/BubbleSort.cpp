#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

void BubbleSort(vector <int>& a){
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a.size()-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main(){
    vector <int> a={8,7,6,5,9,3,4,1,2,1};
    BubbleSort(a);

    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
}