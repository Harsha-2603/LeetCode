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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> vec;
        int n=lists.size();
        for(int i=0;i<n;i++){
            ListNode* ptr=lists[i];
            while(ptr!=nullptr){
                vec.push_back(ptr->val);
                ptr=ptr->next;
            }
        }
        sort(vec.begin(),vec.end());
        int m=vec.size();
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;
        for(int i=0;i<m;i++){
            ListNode* ram=new ListNode(vec[i]);
            tail->next=ram;
            tail=tail->next;
        }
        return(dummy->next);
    }
};