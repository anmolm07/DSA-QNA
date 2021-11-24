/*

Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5]

LINK - https://leetcode.com/problems/reverse-nodes-in-k-group/
*/

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode * temp=head;
        ListNode * next=NULL;
        ListNode * prev=NULL;
        int n=k;
        int m=k;
        while(temp!=NULL && m)
        {
            temp=temp->next;
            m--;
        }
        if(m)
        {
           return head; 
        }
        temp=head;
        while(temp!=NULL && k)
        {
            next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
            k--;
        }
        if(next!=NULL)
            head->next=reverseKGroup(temp,n);
        return prev;
        
    }
};
