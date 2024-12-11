// Given an array with N distinct elements , 
// convert the given array to a form where all elements are in the range from 0 to N-1.
// The order of elements is the same , i.e., 0 is placed on the smallest element, 
// 1 is placed for the 2nd smallest element ,... N-1 is placed for the largest element.

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    int a[5]={19,12,23,8,16};
    vector <int> v(5,0);   //----> 0 means not visited
    int n=5;
    int x=0;
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=0;j<n;j++){
            if(v[j]==1) continue;
            else{
                if(a[j]<min){
                    min=a[j];
                    mindx=j;
                }
            }
        }
        a[mindx]=x;
        x++;
        v[mindx]=1;
    }
    for(int ele : a){
        cout << ele << " ";
    }
    return 0;
}