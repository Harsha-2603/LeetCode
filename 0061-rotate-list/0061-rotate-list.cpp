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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* ptr=head;
        ListNode* temp=head;
        int r,element_null=0,l;
        if(!head){
            return(nullptr);
        }
        ListNode* c=head;
        int count=0;
        while(c!=nullptr){
            count++;
            c=c->next;
        }
        if(k%count==0){
            return(head);
        }
        r=k%count;   
        element_null=count-r;
        element_null=element_null-1;
        while(ptr->next!=nullptr){
            ptr=ptr->next;
        }
        ptr->next=head;
        while(element_null>0){
            temp=temp->next;
            element_null=element_null-1; 
        }
        head=temp->next;
        temp->next=nullptr;
        return(head);
    }
};