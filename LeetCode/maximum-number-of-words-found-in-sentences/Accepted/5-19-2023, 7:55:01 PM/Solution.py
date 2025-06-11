// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences

class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:

        max_n = 0
        for s in sentences:
            n = s.count(" ") + 1
            if (n > max_n):
                max_n = n

        return max_n