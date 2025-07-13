class Solution {
public:

    ListNode* mergeTwoLists(ListNode* a, ListNode* b){
        if(!a) return b;
        else if(!b) return a;
        ListNode* dummy= new ListNode(0);
        ListNode* ans_list= dummy;
        while(a && b){
            if(a->val<=b->val){
                ans_list->next=a;
                a=a->next;
            }
            else{
                ans_list->next=b;
                b=b->next;
            }
            ans_list=ans_list->next;
        }
        ans_list->next= ( a ? a : b);
        return dummy->next;

    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        while(lists.size()>1){
            ListNode* a= lists.back();
            lists.pop_back();
            ListNode* b= lists.back();
            lists.pop_back();
            ListNode* c= mergeTwoLists( a, b);
            lists.push_back(c);
        }
        return lists[0];
    }
};