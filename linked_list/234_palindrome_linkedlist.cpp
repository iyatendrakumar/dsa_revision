class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next; // 1 2 3 3 2 1

        }
        ListNode* prev=NULL;
        ListNode* current=slow;
        while(current){
            ListNode* following=current->next;
           current->next=prev;
            prev=current;
            current=following;
        }
        ListNode* left_scan=head;

        while(prev){
            if(left_scan->val==prev->val){
                left_scan=left_scan->next;
                prev=prev->next;
            }
            else return false;
        }
        return true;


    }
};