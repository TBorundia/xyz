// Given a sentence 'str' , 
//    return the word that is occuring most number of times in that sentence.

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main()
{
    string str="I am happy  today and I am sad too too too";
    stringstream ss(str);
    string temp;
    vector <string> v;
    while(ss >> temp)
    {
        v.push_back(temp);
    }
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<< v[i]<< endl;
    // }
    // cout << "Sorting----------------------> " << endl;
    sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<< v[i]<< endl;
    // }
    int count=1;
    int maxCount=1;
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        if(v[i]==v[i-1])
        {
            count++;
        }
        else
        {
            count=1;
        }
        maxCount=max(maxCount,count);
    }
    count=1;
    for(int i=0;i<n;i++)
    {
        if(v[i]==v[i-1])
        {
            count++;
        }
        else
        {
            count=1;
        }
        if(count==maxCount)
        {
            cout << v[i] << " " << maxCount << endl;
        }
    }
    return 0;
}