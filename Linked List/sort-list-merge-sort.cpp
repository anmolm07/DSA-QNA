/*
Given the head of a linked list, return the list after sorting it in ascending order.

Input: head = [4,2,1,3]
Output: [1,2,3,4]

LINK - https://leetcode.com/problems/sort-list/

*/

class Solution {
public:
    void partition(ListNode *head,ListNode * *a,ListNode * *b)
    {
        ListNode * slow=head;
        ListNode * fast=head->next;
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
                slow=slow->next;
            }
        }
        *a=head;
        *b=slow->next;
        slow->next=NULL;
    }
    ListNode * merge(ListNode * a,ListNode * b)
    {
        if(a==NULL)
        return b;
        if(b==NULL)
        return a;
        if(a->val < b->val)
        {
            a->next=merge(a->next,b);
            return a;
        }
        else
        {
            b->next=merge(a,b->next);
            return b;
        }
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;
        ListNode * a;
        ListNode * b;
        partition(head,&a,&b);
        return merge(sortList(a),sortList(b));
    }
};
