# Reverse Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a signed 32-bit integer `x`, return `x` *with its digits reversed*. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-231, 231 - 1]`, then return `0`.

 **Assume the environment does not allow you to store 64-bit integers (signed or unsigned).** 

 

 **Example 1:** 

```
Input: x = 123
Output: 321

```

 **Example 2:** 

```
Input: x = -123
Output: -321

```

 **Example 3:** 

```
Input: x = 120
Output: 21

```

 

 **Constraints:** 

- -231 <= x <= 231 - 1

## Solution

**Language:** Python  
**Runtime:** 8 ms (beats 97.30%)  
**Memory:** 12.4 MB (beats 52.36%)  
**Submitted:** 2026-09-17T19:39:12.526Z  

```py
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

        
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-integer/)