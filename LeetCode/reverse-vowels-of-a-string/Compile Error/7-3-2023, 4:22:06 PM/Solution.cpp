// https://leetcode.com/problems/reverse-vowels-of-a-string

class Solution {
public:
    string reverseVowels(string s) {
        
        int front_ptr = 0;
        int rear_ptr = s.length()-1;

        while(front_ptr < rear_ptr){

            if(is_vowel(to_string(s[front_ptr])) && is_vowel(to_string(s[rear_ptr]))){
                char temp = s[front_ptr];
                s[front_ptr] = s[rear_ptr];
                s[rear_ptr] = temp;
            }
            if(!(is_vowel(to_string(s[front_ptr])))){
                front_ptr += 1;
            }
            if(!(is_vowel(to_string(s[rear_ptr])))){
                rear_ptr -= 1 ;
            }
        }

        return s;
    }
};