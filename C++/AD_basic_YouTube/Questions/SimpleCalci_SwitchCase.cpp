#include<iostream>
using namespace std;
int main()
{
    char c;
    int a,b;
    int result;
    cout << "enter sign : ";
    cin >> c ;

    cout << "enter a and b : ";
    cin >> a >> b ;

    switch(c)
    {
        case '+':
            result=a+b;
            cout << "Sum : " << result;
            break;

        case '-':
            result=a-b;
            cout << "Differnce : " << result;
            break;

        case '*':
            result=a*b;
            cout << "Multiply : " << result;
            break;

        case '/':
            result=a/b;
            cout << "Division : " << result;
            break;

        default:
            cout << "Incorrect entry " ;
            break;
    }
    return 0;
}