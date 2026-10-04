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