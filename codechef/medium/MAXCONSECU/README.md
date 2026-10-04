# MAXCONSECU

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Chef and Consecutive Ones

Chef has a binary array $nums$ containing only $0$s and $1$s.
He wants to find the maximum number of consecutive $1$s in the array regardless of how many such streaks exist. Can you help Chef determine this?

## Function Declaration
### Function Name

$findMaxConsecutiveOnes$ - This function computes the maximum length of a contiguous segment of `1`s in a binary array.

### Parameters
- $nums$: A binary array of integers where each element is either 0 or 1.
### Return Value
- Returns a single integer representing the maximum number of consecutive 1s in the array.
## Constraints
- $1 \leq N \leq 10^5$
- $nums[i] \in {0, 1}$
### Input Format
- The first line contains a single integer $N$ — the size of the array.
- The second line contains $N$ space-separated integers representing the binary array $nums$.
### Output Format
- Print a single integer — the maximum number of consecutive 1s in the array.
### Sample 1:
Input
Output

```
5
0 1 1 0 1

```

```
2

```

### Explanation:

The two `1`s at positions 2 and 3 are consecutive, so the maximum streak is `2`.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-04T18:50:52.726Z  

```c_cpp
int findMaxConsecutiveOnes(vector<int>& nums) {
    //write code here...
    int c=0;
    int max_c=0;
    for(auto n:nums){
        if(n==1){
            c++;
            max_c=max(max_c,c);
        }
        else{
            c=0;
        }
    }
    return max_c;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/MAXCONSECU)