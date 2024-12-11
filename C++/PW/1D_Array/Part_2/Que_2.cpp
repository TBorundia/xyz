// Find the doublet in the array whose sum is equal to the given value x.

#include<iostream>
#include<vector>
using namespace std;
int main() 
{
    int n;
    cout << "n = ";
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << endl;
    int x;
    cout << "x = ";
    cin >> x;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i]+v[j]==x)
            {
                cout << "( " << v[i] << "  " << v[j]<< " )" << endl;
            }
        }
    }
    return 0;
}