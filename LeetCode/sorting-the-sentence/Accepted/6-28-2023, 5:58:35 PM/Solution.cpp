// https://leetcode.com/problems/sorting-the-sentence

class Solution {
public:
    string sortSentence(string s) {
        vector<string> words;
        istringstream iss(s);
        string word;
        
        while (iss >> word) {
            words.push_back(word);
        }

        int total_count = 0;
        unordered_map<int,string> M;

        for(auto word:words){

            int n = word.length();
            int count = static_cast<int>(word[n-1]) - static_cast<int>('0');
            
            string w = "";
            for(int i=0; i<n-1;i++){
                w += word[i];
            }

            M[count] = w;
            total_count +=1;
        }

        string op ="";

        for(int i=1; i<=total_count-1 ;i++){
            op += (M[i] +" ");
        }
        op += M[total_count];

        return op;
    }
};