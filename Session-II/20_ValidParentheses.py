# Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

# An input string is valid if:

# Open brackets must be closed by the same type of brackets.
# Open brackets must be closed in the correct order.
# Every close bracket has a corresponding open bracket of the same type.


class Solution(object):
    def isValid(self, s):
        map = {'(':')',
               '{':'}',
               '[':']'}
        stack = []
        for i in s:
            if i in map:
                stack.append(i)
            else:
                if not stack or map[stack.pop()] != i:
                    return False
        if stack != []: return False
        return True
        """
        :type s: str
        :rtype: bool
        """