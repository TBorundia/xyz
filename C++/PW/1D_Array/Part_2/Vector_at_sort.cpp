#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main() 
{
    vector<int> v;
    v.push_back(3);
    v.push_back(7);
    v.push_back(1);
    v.push_back(2);
    
    cout << v.at(2)<< endl;      //Get the value of second index

    v.at(1)=100;
    cout << v.at(1)<< endl; 

    for(int i=0; i<v.size();i++)  // To print array
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    //Sort
    sort(v.begin(),v.end());
    for(int i=0; i<v.size();i++)  // To print array
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    return 0;
}