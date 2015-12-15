/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l=new ListNode(0);
		ListNode* p=l;
        int carry=0;
        while(l1!=NULL||l2!=NULL)
        {
            int val1=0;
            if(l1!=NULL)
            {
                val1=l1->val;
                l1=l1->next;
            }

			int val2=0;
			if(l2!=NULL)
            {
                val2=l2->val;
                l2=l2->next;
            }

            int val=val1+val2+carry;
			p->next=new ListNode(val%10);
			carry=val/10;
            p=p->next;
           
        }

		if(carry==1){
		p->next=new ListNode(1);
		}
		return l->next;
    }

};