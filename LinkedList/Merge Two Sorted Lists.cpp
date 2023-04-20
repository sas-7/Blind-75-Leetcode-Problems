class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* fH=NULL;
        ListNode* fT=NULL;
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        if(l1->val<l2->val){
            fH=l1;
            fT=l1;
            l1=l1->next;
        }
        else{
            fH=l2;
            fT=l2;
            l2=l2->next;
        }
        while(l1!=NULL && l2!=NULL){
           if(l1->val<l2->val){
               fT->next=l1;
               fT=l1;
               l1=l1->next;
        }
            else{
                fT->next=l2;
                fT=l2;
                l2=l2->next;
            }
        }
        if(l1!=NULL){
            fT->next=l1;
        }
        if(l2!=NULL){
            fT->next=l2;
        }
        return fH;
    }
};
