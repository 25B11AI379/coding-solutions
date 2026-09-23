# LITUP

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Lit Up

A fair has $N$ stalls in a row, numbered $1$ to $N$ from left to right.

The fair organizers now need to put up some floodlights, so that the stalls can operate well even at night.
It costs the organizers $C_i$ coins to install a floodlight on top of the $i$-th stall.

Each floodlight has a power of $K$, meaning that it will illuminate all stalls at distance at most $K$ from it.
That is, if a floodlight is placed on top of stall $i$, it will illuminate stall $j$ if and only if $|i-j| \le K$.

In order to save money, the organizers decide that they will put up  **exactly two**  floodlights, on two distinct stalls.

Find the minimum possible cost of placing two floodlights, such that every stall is illuminated by at least one floodlight.
If it's impossible to place two floodlights and light up all the stalls, print $-1$ instead.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains two space-separated integers $N$ and $K$ — the number of stalls and the power of each light. The second line contains $N$ space-separated integers $C_1, \ldots, C_N$.
### Output Format

For each test case,

- If it's not possible to place exactly two lights to illuminate all $N$ stalls, print $-1$.
- Otherwise, output the minimum total cost of placing two lights to illuminate all $N$ stalls.
### Constraints
- $1 \leq T \leq 100$
- $2 \leq N \leq 100$
- $1 \le K \le N$
- $1 \le C_i \le 100$
### Sample 1:
Input
Output

```
4
5 1
1 8 1 4 7
3 1
6 2 2
6 3
9 4 2 7 2 6
7 1
4 1 7 3 6 1 5

```

```
5
4
4
-1
```

### Explanation:

 **Test case $1$:**  We can place lights on top of stalls $1$ and $4$, for a cost of $C_1 + C_4 = 1+4 = 5$.
This will illuminate all stalls, because, with $K = 1$:

- The light at $1$ will illuminate stalls $1, 2$.
- The light at $4$ will illuminate stalls $3, 4, 5$.

$5$ is the minimum cost needed to achieve this.

 **Test case $2$:**  Place lights on stalls $2$ and $3$, for a cost of $A_2 + A_3 = 4$.

 **Test case $4$:**  No matter how two lights are placed, with a power of $K = 1$ at least one stall will not be illuminated. So we print $-1$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-23T16:08:22.553Z  

```c_cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        long long N, K;
        cin >> N >> K;
        vector<long long> C(N + 1);
        for (int i = 1; i <= N; ++i) {
            cin >> C[i];
        }
        long long min_total_cost = -1;
        int max_i_bound = min((long long)N, K + 1);
        vector<long long> prefix_min_cost(max_i_bound + 1, -1);
        vector<int> best_i_index(max_i_bound + 1, -1);
        long long current_min = -1;
        int current_best_idx = -1;

        for (int i = 1; i <= max_i_bound; ++i) {
            if (current_min == -1 || C[i] < current_min) {
                current_min = C[i];
                current_best_idx = i;
            }
            prefix_min_cost[i] = current_min;
            best_i_index[i] = current_best_idx;
        }
        int min_j_bound = max(1LL, N - K);
        for (int j = min_j_bound; j <= N; ++j) {
            int min_needed_i = max(1LL, j - 2 * K - 1);
            int max_possible_i = min((int)max_i_bound, j - 1);
            if (min_needed_i <= max_possible_i) {
                int best_idx = best_i_index[max_possible_i];
                if (best_idx >= min_needed_i) {
                    long long cost = C[j] + C[best_idx];
                    if (min_total_cost == -1 || cost < min_total_cost) {
                        min_total_cost = cost;
                    }
                } else {
                    for (int i = min_needed_i; i <= max_possible_i; ++i) {
                        long long cost = C[i] + C[j];
                        if (min_total_cost == -1 || cost < min_total_cost) {
                            min_total_cost = cost;
                        }
                    }
                }
            }
        }
        cout << min_total_cost << "\n";
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LITUP)