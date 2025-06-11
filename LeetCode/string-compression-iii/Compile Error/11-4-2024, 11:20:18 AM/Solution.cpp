// https://leetcode.com/problems/string-compression-iii

class Solution {
public:

    string compressedString(string word) {

        if(word.length() == 0){
            return word;
        }

        char curr_char = word[0];
        int curr_count = 0;

        string output = "";

        for(int i=0; i<word.length(); i++){
            if(word[i] == curr_char){
                curr_count++;
            }
            else{
                while(curr_count != 0){
                    if(curr_count > 9)
                        output += to_string(9);
                        output += curr_char;
                        curr_count -= 9;
                    }
                    else{
                        output += to_string(curr_count);
                        output += curr_char;
                        curr_count = 0;
                    }
                }

                curr_char = word[i];
                curr_count = 1;
            }
            printf("&s\n", output);
        }
        output += to_string(curr_count);
        output += curr_char;
        return output;
    }
};