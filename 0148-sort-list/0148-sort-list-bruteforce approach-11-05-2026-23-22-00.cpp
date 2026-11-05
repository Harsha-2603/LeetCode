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
    ListNode* sortList(ListNode* head) {
        vector<int> vec;
        ListNode* ptr=head;
        while(ptr!=nullptr){
            vec.push_back(ptr->val);
            ptr=ptr->next;
        }
        sort(vec.begin(),vec.end());
        ListNode* temp=head;
        int i=0;
        while(temp!=nullptr){
            temp->val=vec[i];
            i++;
            temp=temp->next;
        }
        return(head);
    }
};