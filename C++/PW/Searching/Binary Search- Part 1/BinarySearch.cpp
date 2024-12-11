// Time complexity---> O(log n)


#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "n :";
    cin >>n ;
    int a[n];
    cout << "Enter n elements :" << endl;
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    cout << endl;
    int key;
    cout << "key :";
    cin >>key ;
    int f=0;
    int x;
    bool flag=false;
    int l=n-1;
    while(f<=l){
        int mid=(f+l)/2;
        if(key==a[mid]){
            x=mid;
            flag=true;
            break;
        }
        else if(key<a[mid]){
            l=mid-1;
        }
        else{
            f=mid+1;
        }
    }
    if(flag==true){
        cout << x << endl;
    }
    else{
        cout << "Not Found Element."<<endl;
    }
    return 0;
}