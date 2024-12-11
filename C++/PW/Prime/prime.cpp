#include<iostream>
#include<cmath>
using namespace std;
int fact=0;
bool isPrime(int n){
    if(n==1) return false;
    for(int i=2; i<sqrt(n);i++){                  // -----> T.C.=O(sqrt(n))
        if(n%i==0){
            fact=i;
            return false;
        }
    }
    return true;
}
int main(){
    int n=1001;
    cout << isPrime(n) << endl;
    cout << fact << endl;
}
