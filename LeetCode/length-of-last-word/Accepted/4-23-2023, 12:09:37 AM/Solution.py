// https://leetcode.com/problems/length-of-last-word

class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        L = s.split()
        last = L[-1]
        return len(last)