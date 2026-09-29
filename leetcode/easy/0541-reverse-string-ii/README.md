# Reverse String II

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string `s` and an integer `k`, reverse the first `k` characters for every `2k` characters counting from the start of the string.

If there are fewer than `k` characters left, reverse all of them. If there are less than `2k` but greater than or equal to `k` characters, then reverse the first `k` characters and leave the other as original.

 

 **Example 1:** 

```
Input: s = "abcdefg", k = 2
Output: "bacdfeg"

```

 **Example 2:** 

```
Input: s = "abcd", k = 2
Output: "bacd"

```

 

 **Constraints:** 

- 1 <= s.length <= 104
- s consists of only lowercase English letters.
- 1 <= k <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.4 MB (beats 98.20%)  
**Submitted:** 2026-09-29T18:26:43.290Z  

```cpp
class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length();
        for (int i = 0; i < n; i += 2 * k) {
            int end = min(i + k, n);
            reverse(s.begin() + i, s.begin() + end);
        }
        return s;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-string-ii/)