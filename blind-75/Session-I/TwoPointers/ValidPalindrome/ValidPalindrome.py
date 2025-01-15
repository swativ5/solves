class Solution(object):
    def alphanum(self, c):
        return (ord('A') <= ord(c) <= ord('Z') or
                ord('0') <= ord(c) <= ord('9') or
                ord('a') <= ord(c) <= ord('z'))
    def isPalindrome(self, s):
        # for c in s:
        #     if c.isalnum():
        #         news = news + c.lower()
        # for i in range(0, len(news)//2):
        #     if  (news[i] != news[len(news) - 1 - i]):
        #         return False
        # return True
        l, r = 0, len(s) - 1
        while l < r:
            while l < r and not self.alphanum(s[l]):
                l += 1
            while r < l and not self.alphanum(s[r]):
                r -= 1
            if s[l].lower() != s[r].lower():
                return False
        return True  
    
        """
        :type s: str
        :rtype: bool
        """