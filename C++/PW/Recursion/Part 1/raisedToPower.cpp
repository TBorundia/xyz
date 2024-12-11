// T.C.---->O(b)
// Recursive Soln S.C.---->O(b)
// Iterative Soln S.C.---->O(1)

#include<iostream>
using namespace std;
int power(int a,int b){
    int p;
    if(b==0){
        return 1;
    }
    else{
        p=a*power(a,b-1);
    }
    return p;
}
int main(){
    int a,b;
    cout << "a and b : " ;
    cin >> a >> b ;
    int p=power(a,b);
    cout << p;
    return 0;
}