class Solution {
public:
    void reorderList(ListNode* head) {

        if (!head || !head->next || !head->next->next) return;
        
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* curr=slow->next;
        slow->next=NULL;
        ListNode* prev=NULL;
        
        while(curr){ 

            ListNode* following=curr->next;
            curr->next=prev;
            prev=curr;
            curr=following;
        }

        ListNode* temp2=head;
    
        while(prev && temp2){
            ListNode* next_of_temp2=temp2->next;
            ListNode* next_of_prev=prev->next;
            temp2->next=prev;
            
            prev->next=next_of_temp2;
            temp2=next_of_temp2;
            prev=next_of_prev;

        }
       
    }
};