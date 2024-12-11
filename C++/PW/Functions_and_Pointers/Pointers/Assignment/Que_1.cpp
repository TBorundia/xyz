// Q1 : Write a program to find the product of two numbers using pointers

#include<iostream>
using namespace std;
int main() 
{
    int a,b;
    cout << "Enter a and b = ";
    cin >> a >> b;
    int *p1=&a;
    int *p2=&b;
    int product;
    
    int *pro=&product;
    *pro=(*p1)*(*p2) ;
    cout << "product = " << product << endl;
    cout << "product = " << *pro << endl;
    return 0;
}