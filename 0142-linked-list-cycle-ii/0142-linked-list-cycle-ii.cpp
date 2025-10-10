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
    ListNode *detectCycle(ListNode *head) {
        ListNode* ptr=head;
        ListNode* temp=head;
        if (!head || !head->next) 
            return (nullptr);
        while(temp!=nullptr && temp->next != nullptr){
            ptr=ptr->next;
            temp=temp->next->next;
            if(ptr==temp){
                temp=head;
                while(temp!=ptr){
                    temp=temp->next;
                    ptr=ptr->next;
                }
                return(temp);
            }
        }
        return(nullptr);
    }
};