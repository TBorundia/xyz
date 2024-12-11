#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout << "Enter the string" << endl;
    getline(cin,s) ;
    sort(s.begin(),s.end());    //------> Sorted acc to ascii value
    cout << "Sorted string : " << s <<endl;
    return 0;
}  