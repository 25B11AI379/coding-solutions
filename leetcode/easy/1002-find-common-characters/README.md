# Find Common Characters

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string array `words`, return  *an array of all characters that show up in all strings within the* `words` *(including duplicates)*. You may return the answer in  **any order**.

 

 **Example 1:** 

```
Input: words = ["bella","label","roller"]
Output: ["e","l","l"]

```

 **Example 2:** 

```
Input: words = ["cool","lock","cook"]
Output: ["c","o"]

```

 

 **Constraints:** 

- 1 <= words.length <= 100
- 1 <= words[i].length <= 100
- words[i] consists of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 28.90%)  
**Memory:** 12.2 MB (beats 80.60%)  
**Submitted:** 2026-09-18T18:01:40.966Z  

```cpp
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> min_frequencies(26, INT_MAX);
        for (const std::string& word : words) {
            vector<int> current_frequencies(26, 0);
            for (char c : word) {
                current_frequencies[c - 'a']++;
            }
            for (int i = 0; i < 26; ++i) {
                min_frequencies[i] = std::min(min_frequencies[i], current_frequencies[i]);
            }
        }
        std::vector<std::string> result;
        for (int i = 0; i < 26; ++i) {
            while (min_frequencies[i] > 0 && min_frequencies[i] != INT_MAX) {
                result.push_back(std::string(1, i + 'a'));
                min_frequencies[i]--;
            }
        }
        return result;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-common-characters/)