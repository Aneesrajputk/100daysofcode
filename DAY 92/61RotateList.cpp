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
   int getlength(ListNode* head){
    int len=0;
    while(head){
        ++len;
        head=head->next;
    }
    return len;
   }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return 0;
        int len =getlength(head);
        int actualRotatek(k%len);
        // same value aayegi 
        if(actualRotatek==0) return head;
        int newlastNodepos=len-actualRotatek-1;
        ListNode* newlastNode =head;

        for(int i=0;i<newlastNodepos;i++){
            newlastNode=newlastNode->next;
        }
         ListNode* newHead= newlastNode->next;
         newlastNode->next=0;

         ListNode* it= newHead;
         while(it->next){
            it=it->next;
         }
         it->next=head;
         return newHead;

        
    }
};