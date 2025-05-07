def numberToWords(num):
        """
        :type num: int
        :rtype: str
        """
        mapping = {0: "Zero",
            1: "One",
            2: "Two",
            3: "Three",
            4: "Four",
            5: "Five",
            6: "Six",
            7: "Seven",
            8: "Eight",
            9: "Nine",
            10: "Ten",
            11: "Eleven",
            12: "Twelve",
            13: "Thirteen",
            14: "Fourteen",
            15: "Fifteen",
            16: "Sixteen",
            17: "Seventeen",
            18: "Eighteen",
            19: "Nineteen",
            20: "Twenty",
            30: "Thirty",
            40: "Forty",
            50: "Fifty",
            60: "Sixty",
            70: "Seventy",
            80: "Eighty",
            90: "Ninety",
            100: "Hundred",
            1000: "Thousand",
            1000000: "Million",
            1000000000: "Billion"
        }

        ans = ""

        b = num//1000000000
        num = num%1000000000

        m = num//1000000
        num = num%1000000

        th = num//1000
        num = num%1000

        h = num//100
        num = num%100

        tens = (num//10)*10  
        ones = num%10

        if(b > 0):
            ans += numberToWords(b)
            if(ans[-1]==" "):
                ans = ans[:-1]
            ans += " Billion "
        
        if(m > 0):
            ans += numberToWords(m)
            if(ans[-1]==" "):
                ans = ans[:-1]
            ans += " Million "

        if(th > 0):
            ans += numberToWords(th)
            if(ans[-1]==" "):
                ans = ans[:-1]
            ans += " Thousand "

        if(h > 0):
            ans += numberToWords(h)
            if(ans[-1]==" "):
                ans = ans[:-1]
            ans += " Hundred "

        if(tens > 0):
            ans += mapping[tens] + " "

        if(ones > 0):
            ans += mapping[ones]

        return ans

print(numberToWords(101110120))