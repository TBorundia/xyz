#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

void insertionSort(vector <int>& a){
    for(int i=0;i<a.size();i++){
        int j=i;
        while(j>0 && a[j]<a[j-1]){
            swap(a[j],a[j-1]);
            j--;
        }
    }
}

int main(){
    vector <int> a={8,7,6,5,9,3,4,1,2,1};
    insertionSort(a);

    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
}