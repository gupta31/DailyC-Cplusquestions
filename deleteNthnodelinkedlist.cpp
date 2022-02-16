class Solution {//iterative approach /traversal
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if(head==NULL) return NULL;
        ListNode*ptr=head;
        int count=1;
        while(ptr!=NULL)
        {
            
            ptr=ptr->next;
            count++;
        }
        count=count-n;
        if(count==1)return head->next;
        ListNode*prev=NULL;
        ListNode*curr=head;
        while(count>1)
        {
            prev=curr;
            curr=curr->next;
            count--;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete(curr);
        return head;
    }
   
};
