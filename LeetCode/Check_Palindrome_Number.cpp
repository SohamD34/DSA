#include<iostream>
#include<cmath>
#include<vector>
using namespace std;


int get_digits(int x){

    if(x==0){
        return 1;
    }

    int count = 0;
    while(x){
        count++;
        x = x/10;
    }
    return count;
}

bool isPalindrome(int x) {

        if(x < 0){ 
            return false;
        }
        int a = x;
        int n = get_digits(x);
        int m = n;

        for(int i=0; i<n/2; i++){

            int front_val = a/pow(10, m-1);
            int back_val = x%10;

            cout<<front_val<<" "<<back_val<<endl;   

            if(front_val != back_val){
                return false;
            }
            a = a - front_val*pow(10, m-1);
            m--;
            x/=10;
        }

        return true;
    }

int main(){

    vector<int> v = {1001};

    for(auto x:v){
        cout<<x<<" "<<isPalindrome(x)<<endl;
    }
    return 0;
}