/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *first=headA;
        while(first!=NULL){
            ListNode *second=headB;
            while(second!=NULL){
                if(first==second){
                    return(first);
                }
                second=second->next;
            }
            first=first->next;
        }
        return(NULL);
    }
};