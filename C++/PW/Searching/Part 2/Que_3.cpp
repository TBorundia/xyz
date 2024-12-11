// Find K closest elements

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector <int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    int n=a.size();
    cout << "Given vector is " << endl;   // 1 2 3 4 5
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    int k=4;
    int x=3;
    cout << endl;

    vector <int> v;

    //case-->1
    if(a[0]>x)
    {
        for(int i=0;i<k;i++)
        {
            v.push_back(a[i]);
        }
        //return;
    }

    //case-->2
    else if(x>a[n-1])
    {
        int i=n-1;
        int j=k-1;
        while(j>=0){
            v.push_back(a[i]);
            j--;
            i--;
        }
        //return;
    }

    //case-->3
    int f=0;
    int l=n-1;
    bool flag=false;
    int t=0; // current index of v
    int mid=-1;
    while(f<=l){
        mid=(f+l)/2;
        if(x==a[mid]){
            v[t]=a[mid];
            flag=true;
            t++;
            break;
        }
        else if(x>a[mid]){
            f=mid+1;
        }
        else{
            l=mid-1;
        }
    }
    int lb=l;
    int ub = f;
    if(flag==true) {
        lb=mid-1;
        ub=mid+1;
    }
    while(t<k && lb>=0 && ub<=n-1){
        int d1=abs(x-a[lb]);
        int d2=abs(x-a[ub]);
        if(d1<=d2){
            v[t]=a[lb];
            lb--;
        }
        else{
            v[t]=a[ub];
            ub--;
        }
        t--;
    }
    if(lb<0){
        while(t<k){
            v[t]=a[ub];
            ub++;
            t++;
        }
    }
    if(ub>n-1){
        while(t<k){
            v[t]=a[lb];
            lb--;
            t++;
        }
    }
    //return;
    // Printing vector v
    sort(v.begin(),v.end());
    cout << "Vector is " << endl;
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}