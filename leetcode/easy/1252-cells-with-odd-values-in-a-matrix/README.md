# Cells with Odd Values in a Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

There is an `m x n` matrix that is initialized to all `0`'s. There is also a 2D array `indices` where each `indices[i] = [ri, ci]` represents a  **0-indexed location**  to perform some increment operations on the matrix.

For each location `indices[i]`, do  **both**  of the following:

- Increment all the cells on row ri.
- Increment all the cells on column ci.

Given `m`, `n`, and `indices`, return  *the  **number of odd-valued cells**  in the matrix after applying the increment to all locations in* `indices`.

 

 **Example 1:** 

```
Input: m = 2, n = 3, indices = [[0,1],[1,1]]
Output: 6
Explanation: Initial matrix = [[0,0,0],[0,0,0]].
After applying first increment it becomes [[1,2,1],[0,1,0]].
The final matrix is [[1,3,1],[1,3,1]], which contains 6 odd numbers.

```

 **Example 2:** 

```
Input: m = 2, n = 2, indices = [[1,1],[0,0]]
Output: 0
Explanation: Final matrix = [[2,2],[2,2]]. There are no odd numbers in the final matrix.

```

 

 **Constraints:** 

- 1 <= m, n <= 50
- 1 <= indices.length <= 100
- 0 <= ri < m
- 0 <= ci < n

 

 **Follow up:**  Could you solve this in `O(n + m + indices.length)` time with only `O(n + m)` extra space?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 11.9 MB (beats 23.68%)  
**Submitted:** 2026-09-30T08:52:07.881Z  

```cpp
class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
       vector<vector<int>> matrix(m, vector<int>(n, 0)); 
         for (const auto& index : indices) {
            int row = index[0];
            int col = index[1];
            for (int j = 0; j < n; j++) {
                matrix[row][j]++;
            }
            for (int i = 0; i < m; i++) {
                matrix[i][col]++;
            }
        }
        int oddCount = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] % 2 != 0) {
                    oddCount++;
                }
            }
        }
        
        return oddCount;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/)