// Search in Rotated Sorted Array

#include<iostream>
using namespace std;
int main(){
    // 1,3,4,8,20,28,33
    int a[]={28,33,1,3,4,8,20};
    int key=20;
    // pivot ----> smallest element
    int f=0;
    int l=7;
    int pivot=-1;
    while(f<=l){
        int mid=(f+l)/2;
        if(a[mid]<a[mid-1] && a[mid]<a[mid+1])
        {
            pivot = mid;
            break;
        }
        if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
        {
            pivot=mid+1;
            break;
        }
        else if(a[mid]>a[l])
        {
            f=mid+1;
        }
        else
        {
            l=mid-1;
        }
    }
    cout << "pivot : " << pivot << endl;
    int z;
    if(pivot=-1)
    {
        while(f<=l){
        int mid=(f+l)/2;
        if(key==a[mid]){
            z=mid;
        }
        else if(key<a[mid]){
            l=mid-1;
        }
        else{
            f=mid+1;
        }
    }
    }
    int x;
    if(key>=a[0] && key<=a[pivot-1])
    {
        f=0;
        l=pivot-1;
        while(f<=l)
        {
            int mid=(f+l)/2;
            if(key==a[mid])
            {
                x=mid;
                break;
            }
            else if(key<a[mid]){
                l=mid-1;
            }
            else{
                f=mid+1;
            }
        }
    }
    else{
        f=pivot;
        l=6;
        while(f<=l)
        {
            int mid=(f+l)/2;
            if(key==a[mid])
            {
                x=mid;
                break;
            }
            else if(key<a[mid]){
                l=mid-1;
            }
            else{
                f=mid+1;
            }
        }
    }
    cout << "INDEX : " << x;
    return 0;
}