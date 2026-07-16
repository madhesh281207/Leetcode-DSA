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
        int size=0;
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        ListNode* last;
        ListNode* newhead=head;;
        while(temp!=NULL)
        {
            if(temp->next == NULL) last=temp;
            size+=1;
            temp=temp->next;
        }
        k=k%size;
        if(k==0) return head;
        last->next=head;
        int tail=size-k;
        ListNode* dummy=head;
        for(int i=1;i<=tail;i++)
        {
            if(i==tail)
            {
                newhead=dummy->next;
                dummy->next=NULL;
                break;
            }
            dummy=dummy->next;
        }
        return newhead;
    }
};