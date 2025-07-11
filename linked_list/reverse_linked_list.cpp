class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* following=NULL;
        ListNode* prev=NULL;
        while(curr ){
            following=curr->next;
            curr->next=prev;
            prev=curr;
            curr=following;
        }
        return prev;
    }
};