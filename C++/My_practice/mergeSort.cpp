#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

void merge(vector <int>& a,int low,int mid,int high){
    int left=low;
    int right=mid+1;

    vector <int> temp;

    while(left<=mid && right<=high){
        if(a[left]<=a[right]){
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(a[left]);
        left++;
    }

    while(right<=high){
        temp.push_back(a[right]);
        right++;
    }

    for(int i=low;i<=high;i++){
        a[i]=temp[i-low];
    }
}

void mergeSort(vector <int>& a,int low,int high){
    if(low==high) return;
    int mid=(low+high)/2;
    mergeSort(a,low,mid);
    mergeSort(a,mid+1,high);
    merge(a,low,mid,high);
}

int main(){
    vector <int> a={8,7,6,5,9,3,4,1,2,1};
    mergeSort(a,0,a.size()-1);

    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
}