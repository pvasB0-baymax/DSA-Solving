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
    bool hasCycle(ListNode *head) {
        ListNode *temp,*cur;
        temp=head;
        cur=head;
        int i=0;
        while(temp!=NULL && cur!=NULL && cur->next!=NULL){
            if(temp==cur && i!=0) return true;
            temp=temp->next;
            cur=cur->next->next;
            i=1;
        }
        return false;
    }
};