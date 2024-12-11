// Q4: Write a function to count the number of digits in a number 
//          and then print the square of this number.


#include<iostream>
using namespace std;
int square(int d)
{
    return d*d;
}
int digit(int n)
{
    int rem;
    int count=0;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int d=digit(n);
    cout << "Number of digit : " << d << endl;
    cout << "Square of number of digit : " << square(d) << endl;
    return 0;
}