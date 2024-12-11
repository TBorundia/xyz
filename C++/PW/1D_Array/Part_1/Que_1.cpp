//Given an array of marks of students, if the marks of any student is 
//     less then 35 print its roll number. [roll number here refers to the index 
//           of the array.]

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of student : " ;
    cin >> n ;
    int a[n];
    cout << "Enter Marks :" ;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<35)
        {
            cout << i << " scored less than 35" << endl;
        }
    }
    return 0;
}