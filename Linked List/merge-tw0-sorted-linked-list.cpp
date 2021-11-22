/*
Given two sorted linked lists consisting of N and M nodes respectively. 
The task is to merge both of the list (in-place) and return head of the merged list.

Input:
N = 4, M = 3 
valueN[] = {5,10,15,40}
valueM[] = {2,3,20}
Output: 2 3 5 10 15 20 40
Explanation: After merging the two linked
lists, we have merged list as 2, 3, 5,
10, 15, 20, 40.

LINK - https://practice.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1


*/

struct Node* SortedMerge(struct Node* a, struct Node* b)
{
    if(a==NULL)
    return b;
    if(b==NULL)
    return a;
    if(a->data<b->data)
    {
        a->next=SortedMerge(a->next,b);
        return a;
    }
    else{
        b->next=SortedMerge(a,b->next);
        return b;
    }
    
}
