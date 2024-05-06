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
    ListNode* removeNodes(ListNode* head) {
        vector<int>v;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        vector<int>pr(v.size());
        pr[n-1]=v[n-1];
        for(int i=n-2;i>=0;i--)
            pr[i]=max(pr[i+1],v[i]);
        int cnt=0;
        temp=head;
        ListNode* ans=head;
        bool ch=0;
      
        while(temp!=NULL)
        {
           if(pr[cnt]==temp->val)
           {
               if(!ch)
               {
                   head=temp;
                   ans=head;
                   ch=1;
               }else 
               {
                   ans->next=temp;
                   ans=ans->next;
               }
           }
            temp=temp->next;
            cnt++;
        }
        return head;
    }
};