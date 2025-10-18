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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* ptr=head;
        ListNode* prev=ptr;
        if (!head) return nullptr;
        while(head && head->val == val)
            head = head->next;
         while(ptr){
            if(ptr->val == val){
                prev->next = ptr->next;
                ptr = ptr->next;
            }else{
                prev = ptr;
                ptr = ptr->next;
            }
        }
        return head;
    }
};