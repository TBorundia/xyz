// Push zeros to end while maintaining the relative order of other elements. 

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

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(v[j]==0){
                swap(v[j],v[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
    return 0;
}