// Given a sorted integer array and an integer 'x', find the lower bound of x.
//Binary Search
#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,4,5,9,15,18,21,24};
    int n=9;
    int x=20;
    int f=0;
    int l=n-1;

    bool flag=false;

    while(f<=l){
        int mid=(f+l)/2;
        if(x==a[mid]){
            cout << a[mid-1];
            flag=true;
            break;
        }
        else if(x>a[mid]){
            f=mid+1;
        }
        else{
            l=mid-1;
        }
    }
    if(flag==false) cout << a[l];
    return 0;
}