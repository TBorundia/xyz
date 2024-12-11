//sqrt(x)

#include<iostream>
using namespace std;
int main()
{
    int x=26;
    int f=0;
    int l=x;
    bool flag=false;

    while(f<=l){
        int mid=(f+l)/2;
        if(mid*mid==x){
            sqrt = mid;
            flag=true;
            break;
        }
        else if(mid*mid > x)
        {
            l=mid-1;
        }
        else
        {
            f=mid+1;
        }
    }
    if(flag==true)
    {
        cout << sqrt;
    }
    else
    {
        cout << l;
    }
    return 0;
}