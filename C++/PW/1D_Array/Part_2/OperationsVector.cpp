#include<iostream>
#include<vector>
using namespace std;
int main() 
{
    vector<int> v;
    v.push_back(3);
    v.push_back(6);
    v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(6);
    v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(6);
    v.push_back(1);
    v.push_back(0);
    
    for(int i=0; i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.pop_back();
    v.pop_back();
    for(int i=0; i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.push_back(3);
    v.push_back(6);
    v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(6);
    v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(6);
    v.push_back(1);
    v.push_back(0);

    cout << "Capacity = "<< v.capacity() << endl;
    cout << "Size = "<< v.size() << endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    
    cout << "Capacity = "<< v.capacity() << endl;
    cout << "Size = "<< v.size() << endl;
    return 0;
}