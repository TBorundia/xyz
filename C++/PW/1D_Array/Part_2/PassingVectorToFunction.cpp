#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void change(vector <int> a)              //----->3 7 1 2
{
    a[0]=100;
    for(int i=0; i<a.size();i++)
    {
        cout << a[i]<< " ";              //----->100 7 1 2
    }
    cout << endl;
}
void change1(vector <int> &a)              //----->3 7 1 2
{
    a[1]=2000;
    for(int i=0; i<a.size();i++)
    {
        cout << a[i]<< " ";              //----->3 2000 1 2
    }
    cout << endl;
}
int main() 
{
    vector<int> v;
    v.push_back(3);
    v.push_back(7);
    v.push_back(1);
    v.push_back(2);
    
    for(int i=0; i<v.size();i++)
    {
        cout << v[i]<< " ";       //----->3 7 1 2
    }
    cout << endl;
    change(v);
    
    for(int i=0; i<v.size();i++)
    {
        cout << v[i]<< " ";             //----->3 7 1 2
    }
    cout << endl;

    change1(v);
    for(int i=0; i<v.size();i++)
    {
        cout << v[i]<< " ";             //----->3 7 1 2
    }
    cout << endl;  
    return 0;
}