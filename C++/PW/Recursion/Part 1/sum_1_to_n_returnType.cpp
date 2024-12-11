#include<iostream>
using namespace std;
int sum(int n){
    int s;
    if(n==0){
        return 0;
    }
    else{
        s=n+sum(n-1);
    }
    return s;
}
int main(){
    int n;
    cout << "n : " ;
    cin >> n ;
    int s=sum(n);
    cout << s;
    return 0;
}