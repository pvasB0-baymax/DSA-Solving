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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *temp=head,*cur=head;
        ///if(temp->next==NULL) return head;
        //else cur=temp->next;
        if(head==NULL || head->next==NULL) return head;
        cur=temp->next;
        ListNode* temp2=cur;
        while(temp->next!=NULL && cur->next){
             temp->next=temp->next->next;temp=temp->next;
             cur->next=cur->next->next;cur=cur->next;


        }
        temp->next=temp2;
        return head;
    }
};