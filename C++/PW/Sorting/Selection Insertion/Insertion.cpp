// Insertion Sort Algorithm
// Total Swaps : n-1
// T.C.---->O(n^2)        ------Avg Case, Worst case
// T.C.---->O(n)          ------Best case 
// Stable Sort

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

    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && v[j]<v[j-1])
        {
            swap(v[j],v[j-1]);
            j--;
        }
    }

    cout << "Sorted array : " << endl;
    for(int ele : v){
        cout << ele << " ";
    }
    return 0;
}