//Return the total number of digits in a number without using any loop.
// Hint: Try using inbuilt to_string() function.

#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x=123456;
    string s=to_string(x);
    cout << s << endl;
    cout << "Total digits : " << s.length();
    return 0;
} 