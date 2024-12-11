// Find the last occurrence of x in the array.

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

    int index=-1;
    for(int i=0;i<n;i++)
    {
        if(v[i]==x)
        {
            index=i;
        }
    }
    cout << "the last occurrence of x in the array is " << index;
    return 0;
}