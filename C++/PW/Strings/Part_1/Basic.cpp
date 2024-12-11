#include<iostream>
using namespace std;
int main()
{
    char str[]={'a','b','c','d'};
    for(int i=0;i<4;i++)
    {
        cout << str[i];
    }
    cout <<endl;
    char str1[5]="abcd";  //----> 5 size ==> a b c d \0 
                                //   \n---> next line
                                //   \t---> Four spaces
    for(int i=0;i<4;i++)
    {
        cout << str1[i];
    }
    cout <<endl;
    char str2[20]="hello world";
    cout << str2;

    return 0;
}