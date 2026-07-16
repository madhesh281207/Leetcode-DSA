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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next == NULL)
        {
            return head;
        }
        ListNode* newhead=new ListNode(0);
        newhead->next=head;
        ListNode* dummy=newhead;
        ListNode* temp=head;
        while(temp!=NULL && temp->next!=NULL)
        {
            ListNode* first=temp;
            ListNode* second=temp->next;
            ListNode* third=temp->next->next;
            second->next=first;
            first->next=third;
            dummy->next=second;
            
            dummy=first;
            temp=third;
        }
        
        return newhead->next;
    }
};