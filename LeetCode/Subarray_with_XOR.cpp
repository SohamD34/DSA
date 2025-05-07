#include <iostream>
using namespace std;

int solve(int* A, int n1, int B) {
    
    int count = 0;
    
    for(int start=0; start<n1; start++){
        
        int curr_xor = A[start];
        
        if(curr_xor == B){
            count += 1;
        }
        
        for(int end=start+1; end<n1; end++){
            curr_xor ^= A[end];
            
            if(curr_xor == B){
                count += 1;
            }
        }
    }
    return count;
}

int main(){

    // int A[] = {4, 2, 2, 6, 4};
    // int n1 = sizeof(A)/sizeof(A[0]);
    // int B = 6;

    int A[] = {5, 6, 7, 8, 9};
    int n1 = sizeof(A)/sizeof(A[0]);
    int B = 5;

    cout<<solve(A, n1, B)<<endl;
 
    return 0;
}