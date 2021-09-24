// { Driver Code Starts
//Initial Template for C++
/*

  Input :
N = 10
Linked List = 1->7->5->3->9->8->10
                      ->2->2->5->NULL
m = 1, n = 8
Output : 2 10 8 9 3 5 7 1 2 5 
Explanation :
The nodes from position 1 to 8 
are reversed, resulting in 
2 10 8 9 3 5 7 1 2 5.


*/
#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};


 // } Driver Code Ends
//User function Template for C++

/*Link list node 
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    
    public:
    Node* reverse(Node* head)
    {
        Node* curr=head;
        Node* prev=NULL;
        while(curr)
        {
            Node* next =curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    Node* reverseBetween(Node* head, int m, int n)
    {
       if(m==n)
       {
           return head;
           
       }
       Node* revs=NULL, *revs_prev=NULL;
       Node* revsend=NULL, *rev_next=NULL;
       
       Node*curr =head;
       int i=1;
       while(curr && i<=n)
       {
           if(i<m)
           {
               revs_prev=curr;
           }
           if(i==m)
           {
               revs=curr;
           }
           if(i==n)
           {
               revsend=curr;
               rev_next=curr->next;
           }
           curr=curr->next;
           i++;
           
       }
       revsend->next=NULL;
       revsend=reverse(revs);
       if(revs_prev)
       {
           revs_prev->next = revsend;
       }
       else
       {
           head= revsend;
       }
       revs->next = rev_next;
       return head;
       
    }
};

// { Driver Code Starts.

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}



// Driver program to test above functions
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int N, m, n;
		cin >> N>>m>>n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		

        Solution ob;

		Node* newhead = ob.reverseBetween(head, m, n);
		printList(newhead);

		cout << "\n";



	}
	return 0;
}
  // } Driver Code Ends
  
  
 
