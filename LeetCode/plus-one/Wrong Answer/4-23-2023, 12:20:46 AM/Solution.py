// https://leetcode.com/problems/plus-one

class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """

        if digits[-1] == 9:
            if len(digits)>1:
                digits[-2]+=1
            else:
                digits.insert(0,1)
            digits[-1] = 0
        else:
            digits[-1]+=1
        
        return digits
