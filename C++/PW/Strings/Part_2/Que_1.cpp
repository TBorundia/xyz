// Input a string and return the number of times 
//     the neighbouring characters are different from each other.

#include<iostream>
#include<string>
using namespace std;
int main()
{
    int count=0;
    string s;
    cout << "Enter the string" << endl;
    cin >> s ;
    cout << "String : " << s <<endl;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(n==1)
        {
            break;
        }
        if(i==0)
        {
            if(s[i]!=s[i+1])
            {
                count++;
            }
        }
        else if(i==n-1)
        {
            if(s[i]!=s[i-1])
            {
                count++;
            }
        }
        else if(s[i]!=s[i+1] && s[i]!=s[i-1])
        {
            count++;
        }
    }
    cout << "Count : " << count <<endl;
    return 0;
}  