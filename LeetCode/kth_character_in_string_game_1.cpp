#include <bits/stdc++.h>
using namespace std;

char kthCharacter(int k){

    string word = "a";
    int len = 1;

    while(len < k){
        string nextword = "";
        for(int i=0; i<len; i++){
            nextword += (word[i] + 1);
        }
        word += nextword;
        len*=2;
    }
    return word[k-1];
}   

int main(){

    int k = 5;
    cout<<kthCharacter(k)<<endl;

    k = 10;
    cout<<kthCharacter(k)<<endl;
}