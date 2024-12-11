// Given a sorted array of non-negative distinct integers,
// find the smallest missing non-negative element in it.

// distinct----> all integer are different

//linear search 
// for(int i=0;i<n;i++){
//     if(i!=a[i]) return -1;
// }

//Binary Search
#include<iostream>
using namespace std;
int main()
{
    int a[]={0,1,3,4,6,7,8,9};
    int n=8;
    int f=0;
    int l=n-1;

    int ans=-1; 
    while(f<=l){
        int mid=(f+l)/2;
        if(mid==a[mid]){
            f=mid+1;
        }
        else
        {
            ans=mid;
            l=mid-1;
        }
    }
    cout << ans;
    return 0;
}