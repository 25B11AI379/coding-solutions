class Solution(object):
    def reverse(self, n):
        sign = -1 if n < 0 else 1
        n = abs(n)
        s=0
        while n!=0:
            r=n%10
            s=s*10+r
            n//=10
        s *= sign
        
        if s < -2**31 or s > 2**31 - 1:
            return 0
        return s

        