# Reverse Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given the `head` of a singly linked list, reverse the list, and return  *the reversed list*.

 

 **Example 1:** 

```
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

```

 **Example 2:** 

```
Input: head = [1,2]
Output: [2,1]

```

 **Example 3:** 

```
Input: head = []
Output: []

```

 

 **Constraints:** 

- The number of nodes in the list is the range [0, 5000].
- -5000 <= Node.val <= 5000

 

 **Follow up:**  A linked list can be reversed either iteratively or recursively. Could you implement both?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 13.6 MB (beats 14.64%)  
**Submitted:** 2026-10-04T19:04:54.844Z  

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head) return nullptr;
        vector<int>values;
        ListNode* curr=head;
        while(curr!=nullptr){
            values.push_back(curr->val);
            curr=curr->next;
        }
        curr=head;
        int i=values.size()-1;
        while(curr!=nullptr){
            curr->val=values[i];
            i--;
            curr=curr->next;
        }
        return head;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-linked-list/)