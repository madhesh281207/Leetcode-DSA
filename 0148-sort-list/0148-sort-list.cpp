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
        map<int,int>mp;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            mp[curr->val]++;
            curr=curr->next;
        }
        ListNode* dummy=new ListNode(0);
        ListNode* tail=dummy;
        for(auto&[value,times]:mp)
        {
            for(int i=0;i<times;i++)
            {
                ListNode* temp=new ListNode(value);
                tail->next=temp;
                tail=tail->next;
            }
        }
        return dummy->next;

    }
};