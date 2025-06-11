#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isChar(char c){
    int ascii = (int)c;
    if(65<=ascii && ascii<=90){
        return true;
    }
    if(97<=ascii && ascii<=122){
        return true;
    }
    return false;
}

char base(char c){
    int ascii = (int)c;
    if(65<=ascii && ascii<=90){
        return c;
    }
    if(97<=ascii && ascii<=122){
        return c-32;
    }
    return c;
}

bool isPalindrome(string s) {
    
    int n = s.length();
    int front = 0;
    int back = n-1;

    while(front != back){
        if(isChar(s[front]) && isChar(s[back])) {

            if(base(s[front]) != base(s[back])){
                return false;
            }

            front++;
            back--;
        }
        else{
            if(!isChar(s[front])){
                front++;
            }
            if(!isChar(s[back])){
                back--;
            }
        }

        if(front>back){
            return false;
        }
    }
    return true;
}

int main(){
    
    vector<string> ss = {"A man, a plan, a canal: Panama", "race a car", " ", ".,"};

    for(auto s:ss){
        cout<<isPalindrome(s)<<endl;
    }
    return 0;
}