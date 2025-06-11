// https://leetcode.com/problems/valid-palindrome

class Solution {
public:
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
};