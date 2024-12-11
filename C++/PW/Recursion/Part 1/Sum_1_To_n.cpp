#include<iostream>
using namespace std;
void sum(int s, int n){
    if(n==0){
        cout << s;
        return;
    }
    sum(s+n,n-1);
}
int main(){
    int n;
    cout << "n : " ;
    cin >> n ;
    sum(0,n);
    return 0;
}