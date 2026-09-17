# Calculate the Nth term

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Strings are usually ordered in lexicographical order. That means they are ordered by comparing their leftmost different characters. For example, $abc<abd$ because $c<d$. Also $z>yyy$ because $z>y$. If one string is an exact prefix of the other it is lexicographically smaller, e.g., $gh<ghij$.

Given an array of strings sorted in lexicographical order, print all of its permutations in strict lexicographical order.  If two permutations look the same, only print one of them.  See the 'note' below for an example.

Complete the function `next_permutation` which generates the permutations in the described order.  

For example, $s=[ab,bc,cd]$.  The six permutations in correct order are:
```
ab bc cd
ab cd bc
bc ab cd
bc cd ab
cd ab bc
cd bc ab
```

**Note:** There may be two or more of the same string as elements of $s$.  
For example, $s = [{ab,ab,bc}]$.  Only one instance of a permutation where all elements match should be printed.  In other words, if $s[0]==s[1]$, then print either $s[0]\enspace s[1]$ or $s[1]\enspace s[0]$ but not both.  

A three element array having three distinct elements has six permutations as shown above.  In this case, there are three matching pairs of permutations where $s[0]={ ab}$ and $s[1]={ ab}$ are switched.  We only print the three visibly unique permutations:  
```
ab ab bc
ab bc ab
bc ab ab
```

**Input Format**

The first line of each test file contains a single integer $n$, the length of the string array $s$. 

Each of the next $n$ lines contains a string $s[i]$.

**Constraints**

+ $2 \leq n \leq 9$
+ $1 \leq |s[i]| \leq 10$
+ $s[i]$ contains only lowercase English letters.

**Output Format**

Print each permutation as a list of space-separated strings on a single line.

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T19:49:55.568Z  

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  if (n == 1) return a;
    if (n == 2) return b;
    if (n == 3) return c;
    return find_nth_term(n-1,a,b,c)+find_nth_term(n-2,a,b,c)+find_nth_term(n-3,a,b,c);
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/permutations-of-strings/problem)