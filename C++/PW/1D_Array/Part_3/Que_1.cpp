// Sort the array of 0's and 1's.

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
void sort01(vector<int>& v)
{
    int n=v.size();
    int num_0=0;
    int num_1=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0) num_0++;
        else num_1++;
    }
    for(int i=0;i<n;i++)
    {
        if(i < num_0) v[i]=0;
        else v[i]= 1;
    }
}
int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    vector<int> v;
    cout << " Enter 0's and 1's : ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << endl;
    sort01(v);
    for(int i=0; i<n;i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}