/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
        return NULL;
       ListNode* temp=head;
       int k=0;
       while(temp!=NULL){
            k++;
            temp=temp->next;
       }
       if(k==1 && n==1)
       return NULL;
       if(k==n)
       {
           return head->next;
       }
       cout<<k<<"\n";
     int s=k-n;
       temp=head;
       int i=1;
       ListNode*temp1=head->next;
       while(i<=k && temp!=NULL && temp1!=NULL  )
       {
            cout<<temp->val<<" ";
           
           if(i==s)
        {
            
            temp->next=temp1->next;
        }
          
           i++;
           temp=temp->next;
           temp1=temp1->next;
       }

     
       return head;
       
    
    }
};