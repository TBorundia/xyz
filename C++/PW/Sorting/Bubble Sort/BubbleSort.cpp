// T.C.----> O(n^2)
// S.C.---->  O(1) ----> No extra space is used.
// Bubble Sort is Stable Sort

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

    for(int i=0;i<n-1;i++){                // No of passes
         bool flag=true;  //----->O(n)
        for(int j=0;j<n-1-i;j++){              // traverse
            if(v[j]>v[j+1])
            {
                // int temp=v[j];
                // v[j]=v[j+1];
                // v[j+1]=temp;

                swap(v[j],v[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }

    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
    return 0;
}