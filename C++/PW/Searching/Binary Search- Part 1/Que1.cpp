// Given a sorted array of n elements and a target 'x'.
// Find the first occurence of 'x' in the array.
// If 'x' does not exist return -1.

#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,2,2,3,3,3,5,5,6,7,8,9};
    int n=13;
    int x=4;
    int f=0;
    int l=n-1;

    bool flag=false;

    while(f<=l){
        int mid=(f+l)/2;
        if(x==a[mid]){
            if(a[mid-1]!=x) 
            {
                flag=true;
                cout << mid;
                break;
            }
            else
            {
                l=mid-1;
            }
        }
        else if(x>a[mid]){
            f=mid+1;
        }
        else{
            l=mid-1;
        }
    }
    if(flag==false) cout << -1;
    return 0;
}