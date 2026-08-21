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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=NULL;
        ListNode* temp;
        ListNode *temp1,*temp2;
        temp1=l1;
        temp2=l2;
        int carry=0;
        while(temp1!=NULL && temp2!=NULL)
        {
            int k=temp1->val+temp2->val;
            if(!head)
            {
                temp=new ListNode((k+carry)%10);
                carry=(carry+k)/10;
                head=temp;
            }
            else{
                temp->next=new ListNode((k+carry)%10);
                carry=(carry+k)/10;
                temp=temp->next;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1)
        {
                int z=(temp1->val+carry);
                temp->next=new ListNode(z%10);
                carry=(z)/10;
                temp=temp->next; 
                temp1=temp1->next;
        }
        while(temp2)
        {
             int z=(temp2->val+carry);
                temp->next=new ListNode(z%10);
                carry=(z)/10;
                temp=temp->next; 
                temp2=temp2->next;
        }
        if(carry!=0) temp->next=new ListNode(carry);
        return head;
    }
};