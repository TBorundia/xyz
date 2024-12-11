#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int partition(vector <int>& a,int low,int high){
    int pivot=a[low];
    int i=low;
    int j=high;

    while(i<j){
        while(a[i]<=pivot && i<=high){
            i++;
        }

        while(a[j]>pivot && j>=low){
            j--;
        }
        if(i<j) swap(a[i],a[j]);
    }
    swap(a[low],a[j]);
    return j;
}

void quickSort(vector <int>& a,int low,int high){
    if(low<high){
        int partIndex=partition(a,low,high);
        quickSort(a,low,partIndex-1);
        quickSort(a,partIndex+1,high);
    }
}

int main(){
    vector <int> a={8,7,6,5,9,3,4,1,2,1};
    quickSort(a,0,a.size()-1);

    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
}