// Peak index in mountain array.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(3);
    v.push_back(1);

    int f=0;
    int l=v.size()-1;
    int x;
    while(f<=l){
        int mid=(f+l)/2;
        if(v[mid]>v[mid-1] && v[mid]<v[mid+1])
        {
            cout << mid << endl;
            break;
        }
        else if(v[mid]>v[mid+1])
        {
            l=mid-1;
        }
        else
        {
            f=mid+1;
        }
    }
    return 0;
}