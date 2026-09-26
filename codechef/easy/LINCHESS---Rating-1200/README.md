# LINCHESS - Rating 1200

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Chef and Linear Chess

Chef wants to play a game of  *linear chess*  on a one-dimensional board ― an infinite row of squares numbered by positive integers. In this game, he has a pawn, which is initially at a square $K$. There are also $N$ other people (numbered $1$ through $N$); Chef can choose one of them to play against. For each valid $i$, the $i$-th player would play in the following way:

- Take a pawn and place it on a square $P_i$.
- Repeat the following move any number of times: move the pawn from its current square $P_i$ squares forward, i.e. from a square $s$, this player's pawn is moved to the square $s+P_i$.
- If this player moves their pawn to the square with Chef's pawn, then Chef's pawn is captured and he loses the game.

Unfortunately, Chef cannot move his pawn during the game, making him an easy target for other players. Given the starting positions of all $N+1$ players, find a player who can capture Chef's pawn in the smallest number of moves or determine that no player can capture his pawn.

### Input
- The first line of the input contains a single integer $T$ denoting the number of test cases. The description of $T$ test cases follows.
- The first line of each test case contains two space-separated integers $N$ and $K$.
- The second line contains $N$ space-separated integers $P_1, P_2, \ldots, P_N$.
### Output

For each test case, print a single line containing one integer ― the starting square of one player that can beat Chef in the smallest number of turns, or $-1$ if no player can beat him.

If there are multiple solutions, you may find any one.

### Constraints
- $1 \le T \le 100$
- $1 \le N \le 1,000$
- $1 \le K \le 10^9$
- $1 \le P_i \le 10^9$ for each valid $i$
- $K, P_1, P_2, \ldots, P_N$ are pairwise distinct
### Subtasks

 **Subtask #1 (100 points):**  original constraints

### Sample 1:
Input
Output

```
2
4 6
4 3 2 8
4 7
4 3 2 8
```

```
3
-1
```

### Explanation:

 **Example case 1:**  The player who starts at the position $2$ can move to square $4$ and then to square $6$. The player who starts at the position $3$ can move to square $6$. The player at position $2$ can capture Chef's pawn in $2$ turns, whereas the player at position $3$ can capture Chef's pawn in $1$ turn. Therefore, the answer is $3$.

 **Example case 2:**  No player can capture Chef's pawn.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-26T18:14:09.829Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        long long ans = -1;
        long long min_moves = -1;
        for (int i = 0; i < n; i++) {
            long long p;
            cin >> p;
            if (k % p == 0) {
                long long moves = (k / p) - 1;
                if (min_moves == -1 || moves < min_moves) {
                    min_moves = moves;
                    ans = p;
                }
            }
        }
        cout << ans << "\n";
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LINCHESS)