class Solution(object):
    def isPalindrome(self, n):
        """
        :type x: int
        :rtype: bool
        """
        temp=n
        s=0
        while n>0:
            r=n%10
            s=s*10+r
            n//=10
        if temp==s :
            return True
        else :
            return False
        