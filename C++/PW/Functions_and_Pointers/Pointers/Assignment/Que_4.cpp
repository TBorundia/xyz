// Q4: Find the output of the following code snippet.
//      int a = 15, b = 20;
//      int *ptr = &a;
//      int *ptr2 = &b;
//      *ptr = *ptr2;

#include<iostream>
using namespace std;
int main() 
{
    int a = 15, b = 20;
    int *ptr = &a;
    int *ptr2 = &b;
    *ptr = *ptr2;
    cout << a <<endl;
    return 0;
}

// Output ---->
// 20