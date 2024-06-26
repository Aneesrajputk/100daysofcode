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
    ListNode* mergeTwoLists(ListNode* left, ListNode* right) {
        if(left==0)return right;
        if(right==0)return left;

        ListNode* ans=new ListNode(-1);
        ListNode*nptr=ans;
        while(left&& right){
            if(left->val <= right->val){
                nptr->next=left;
                nptr=left;
                left=left->next;
            }
            else{
                nptr->next=right;
                nptr=right;
                right=right->next;
            }
        }
        if(left){
            nptr->next=left;
            // nptr=left;
            // left=left->next;

        }
        if(right){
            nptr->next=right;
            // nptr=right;
            // right=right->next;
        }
        return ans->next;
    }
};