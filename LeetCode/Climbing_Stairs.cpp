#include <iostream>
using namespace std;

int climbStairs(int n) {
    
    int n1 = 1;
    int n2 = 2;

    if(n==1) return n1;
    if(n==2) return n2;

    int temp = 0;

    for(int i=0; i<n-2; i++){
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
    }
    return temp;
}

int main(){
    int n;
    cin>>n;
    cout<<climbStairs(n)<<endl;
    return 0;
}