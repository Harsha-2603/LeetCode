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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr){
            return(nullptr); 
        }
        if(head->next==nullptr && n==1){
            return(nullptr);
        }
        ListNode* ptr=head;
        ListNode* temp=head;
        ListNode* prev=temp;
        int count=0;
        while(ptr!=nullptr){
            ptr=ptr->next;
            count++;
        }
        int iterations=count-n;
        while(iterations>0){
            prev=temp;
            temp=temp->next;
            iterations--;
        }
        if (temp == head) {
            head = head->next;
            delete temp;
            return head;
        }
        prev->next=temp->next;
        delete(temp);
        return(head);
    }
};