#include<iostream>
using namespace std;

int max(int a,int b, int c)
{
    if(a>b)
    {
        if(a>c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if(b>c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

bool check(int a, int b, int c)
{
    int x,y,z;
    int m=max(a,b,c);
    if(m==a)
    {
        x=a;
        y=b;
        z=c;
        if((x*x)==(y*y)+(z*z))
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
    else if(m==b);
    {
        x=b;
        y=a;
        z=c;
        if((x*x)==(y*y)+(z*z))
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
    else
    {
        x=c;
        y=b;
        z=a;
        if((x*x)==(y*y)+(z*z))
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
}

int main()
{
    int a,b,c ;
    cout << "Enter a , b, c : " ;
    cin >> a >> b >> c ;

    if(check(a,b,c))
    {
        cout << "Pythagonal Triplets" ;
    }
    else
    {
        cout << "Not a Pythagonal Triplets" ;
    }
    return 0;
}