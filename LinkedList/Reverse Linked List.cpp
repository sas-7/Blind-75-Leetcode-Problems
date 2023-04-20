class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* tail=head->next;
        ListNode* smallAns=reverseList(head->next);
        tail->next=head;
        head->next=NULL;
        return smallAns;
    }
};
