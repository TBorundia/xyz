#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

void selectionSort(vector <int>& a){
    for(int i=0;i<a.size()-1;i++){
        int min_Ele=INT_MAX;
        int min_idx=0;
        for(int j=i;j<a.size();j++){
            if(min_Ele>a[j]){
                min_Ele=a[j];
                min_idx=j;
            }
        }
        swap(a[i],a[min_idx]);
    }
}

int main(){
    vector <int> a={5,5,7,3,8,3,9,2,5,7,3,8,3,9,2,7,3,8,3,9,2};
    selectionSort(a);

    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
}