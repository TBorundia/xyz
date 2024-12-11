// Selection Sort Algorithm
// Total Swaps : n-1;
// T.C.---->O(n^2)                Best case, Avg Case, Worst case
// Unstable Sort
// Least swap cost

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout << " n : ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter element : " << endl;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    for(int i=0;i<n-1;i++){
        int min =INT_MAX;
        int mindx=-1;

        // Min element calculation
        for(int j=i;j<n;j++){
            if(v[j]<min){
                min=v[j];
                mindx=j;
            }
        }

        swap(v[i],v[mindx]);
    }

    cout << "Sorted array : " << endl;
    for(int ele : v){
        cout << ele << " ";
    }
    return 0;
}