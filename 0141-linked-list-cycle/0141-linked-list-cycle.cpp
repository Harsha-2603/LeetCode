/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    bool hasCycle(ListNode *head) {
        ListNode* ptr=head;
        ListNode* temp=head;
       if (!head || !head->next) return false;
        while (temp && temp->next){
            ptr=ptr->next;
            temp=temp->next->next;
            if(ptr==temp){
                return(1);
            }
        }
        return(0);
    }
};
