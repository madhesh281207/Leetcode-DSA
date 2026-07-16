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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* dummy=new ListNode(0);
        ListNode* prev=dummy;
        dummy->next=head;
        while(head)
        {
            if(head->next !=NULL && head->val==head->next->val )
            {
                int x=head->val;
                while(head!=NULL && head->val==x)
                {
                    head=head->next;
                }
                prev->next=head;
            }else{
                prev=head;
                head=head->next;
            }
        }
        return dummy->next;
    }
};