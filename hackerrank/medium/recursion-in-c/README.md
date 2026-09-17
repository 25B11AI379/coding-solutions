# Calculate the Nth term

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

**Objective**	
This challenge will help you learn the concept of recursion.

A function that calls itself is known as a recursive function. The C programming language supports recursion. But while using recursion, one needs to be careful to define an exit condition from the function, otherwise it will go into an infinite loop.

To prevent infinite recursion, $if...else$ statement (or similar approach) can be used where one branch makes the recursive call and other doesn't.
```c
void recurse() {
    .....
    recurse()  //recursive call
    .....
}
int main() {
    .....
    recurse(); //function call
    .....
}
```


**Task**

There is a series, $S$, where the next term is the sum of pervious three terms. Given the first three terms of the series, $a$, $b$, and $c$ respectively, you have to output the *n<sup>th</sup>* term of the series using recursion.

Recursive method for calculating *n<sup>th</sup>* term is given below.

$$S(n) = \begin{cases}a & n = 1,\\b & n = 2,\\c & n = 3,\\S(n-1) + S(n-2) + S(n-3) & otherwise\end{cases}$$

**Input Format**

- The first line contains a single integer, $n$.

- The next line contains *3* space-separated integers, $a$, $b$, and $c$.

**Constraints**

- $1 \le n \le 20$
- $1 \le a, b, c \le 100$

**Output Format**

Print the *n<sup>th</sup>* term of the series, $S(n)$.

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T19:49:40.374Z  

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

[View on HackerRank](https://www.hackerrank.com/challenges/recursion-in-c/problem)