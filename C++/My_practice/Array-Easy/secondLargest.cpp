#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int Sec_largest1(vector <int>& a){
    int large=a[0];
    for(int i=1;i<a.size();i++){
        large=max(large,a[i]);
    }

    int sec=-1;
    for(int i=0;i<a.size();i++){
        if(a[i]>sec && a[i]<large){
            sec=a[i];
        }
    }
    return sec;
}

int secLarge(vector <int>& a){
    int Large=a[0];
    int sLarge=-1;

    int n=a.size();
    for(int i=1;i<n;i++){
        if(a[i]>Large){
            sLarge=Large;
            Large=a[i];
            
        }
    }
    return sLarge;
}

int main(){
    vector <int> a={8,7,6,5,9,3,4,1,2,1};
    cout << Sec_largest1(a) << endl;

    cout << secLarge(a) << endl;
}