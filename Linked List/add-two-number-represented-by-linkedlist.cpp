/*
Given two numbers represented by two linked lists of size N and M. The task is to return a sum list.

The sum list is a linked list representation of the addition of two input numbers from the last.

LINK- https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

*/


class Solution
{
    public:
    struct Node * reverse(struct Node * root)
    {
        Node * temp=root,*prev,*next;
        next=root;
        prev=NULL;
        while(temp!=NULL)
        {
            next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
        }
        root=prev;
        return root;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first=reverse(first);
        second=reverse(second);
        Node * res=NULL,* prev=NULL;
        int carry=0,sum;
        while(first!=NULL || second!=NULL)
        {
            sum = carry + (first ? first->data : 0) + (second ? second->data : 0);
            carry= sum>=10 ? 1:0;
            sum=sum%10;
            Node * temp=new Node(sum);
            if(res==NULL)
            res=temp;
            else
            prev->next=temp;
            prev=temp;
            if(first)
            first=first->next;
            if(second)
            second=second->next;
        }
        if(carry>0)
        prev->next=new Node(carry);
        res=reverse(res);
        return res;
        
    }
};
