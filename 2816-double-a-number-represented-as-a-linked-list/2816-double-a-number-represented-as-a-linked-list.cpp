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
    ListNode* doubleIt(ListNode* head) {
        int x=0;
        ListNode* temp=head;
        vector<int>v;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        reverse(v.begin(),v.end());
        deque<int>dq;
        int rem=0;
        for(int i=0;i<v.size();i++)
        {
            int m=v[i]*2;
            m+=rem;
            dq.push_front(m%10);
            rem=m/10;
        }
        if(rem)
            dq.push_front(rem);
        temp=head;
        int i=0;
        ListNode* temp2=head;
        while(temp!=NULL)
        {
            temp->val=dq[i++];
            temp2=temp;
            temp=temp->next;
        }
        if(i!=dq.size())
        {
        
            ListNode* a=new ListNode(dq[i]);
            temp2->next=a;
        }
        return head;
    }
};