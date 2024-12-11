// Given an array , find if it is sorted or not

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout << "n : ";
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            flag=false;
            break;
        }
    }

    if(flag==false){
        cout << " Not Sorted ";
    }
    else{
        cout << " Sorted ";
    }
    return 0;
}