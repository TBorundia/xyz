#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector <int> v(5);
    cout << "Enter 5 elements : " << endl;
    for(int i=0;i<5;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end()); //   T.C. ------> o(n log n)

    for(int i=0;i<5;i++){
        cout << v[i] << " ";     // Acending Order
    }
    cout<< endl;
    reverse(v.begin(),v.end());
    for(int i=0;i<5;i++){
        cout << v[i] << " ";     // Decending Order
    }

    return 0;
}