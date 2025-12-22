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
    bool isPalindrome(ListNode* head) {
        stack<int>st;
        if(head==nullptr || head->next==nullptr){
            return(1);
        }
        ListNode* ptr;
        ptr=head;
        while(ptr!=nullptr){
            st.push(ptr->val);
            ptr=ptr->next;
        }
        ListNode* temp;
        temp=head;
        while(temp!=nullptr){
            if(temp->val!=st.top()){
                return(0);
            }
            temp=temp->next;
            st.pop();
        }
        return(1);
    }
};