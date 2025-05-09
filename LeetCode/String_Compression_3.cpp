#include<string>
#include <iostream>
using namespace std;

class Solution {
public:

    string compressedString(string word) {

        if(word.length() == 0){
            return word;
        }

        char curr_char = word[0];
        int curr_count = 0;

        string out = "";

        for(int i=0; i<word.length(); i++){
            if(word[i] == curr_char){
                curr_count++;
            }
            else{
                while(curr_count != 0){
                    if(curr_count > 9){
                        out += to_string(9);
                        out += curr_char;
                        curr_count -= 9;
                    }
                    else{
                        out += to_string(curr_count);
                        out += curr_char;
                        curr_count = 0;
                    }
                }

                curr_char = word[i];
                curr_count = 1;
            }
        }
        while(curr_count != 0){
            if(curr_count > 9){
                out += to_string(9);
                out += curr_char;
                curr_count -= 9;
            }
            else{
                out += to_string(curr_count);
                out += curr_char;
                curr_count = 0;
            }
        }
        return out;
    }
};