#include<iostream>
#include<vector>
using namespace std;
int main() 
{
    vector<int> v(5);   //size is 5 and each element in 0;
    cout << "Capacity = "<< v.capacity() << endl;
    cout << "Size = "<< v.size() << endl;

    vector<int> v1(5,7);   //size is 5 and each element in 7;
    return 0;
}