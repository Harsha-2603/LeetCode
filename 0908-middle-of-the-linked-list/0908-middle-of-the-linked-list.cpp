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
    ListNode* middleNode(ListNode* head) {
        ListNode* ptr=head;
        ListNode* c=head;
        int count=0;
        while(c!=nullptr){
            c=c->next;
            count++;
        }
        count=count/2;
        count=count;
        for(int i=0;i<count;i++){
            ptr=ptr->next;
        }
        return(ptr);

    }
};