class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode*slow=head,*fast=head;
        while(fast->next && fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode*l1=head;
        ListNode*l2=reverseList(slow->next);
        slow->next=NULL;
        while(l1 && l2){
            ListNode*t1=l1->next,*t2=l2->next;
            l1->next=l2;
            l2->next=t1;
            l1=t1;
            l2=t2;
        }
    }
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* tail=head->next;
        ListNode* smallAns=reverseList(head->next);
        tail->next=head;
        head->next=NULL;
        return smallAns;
    }
};
