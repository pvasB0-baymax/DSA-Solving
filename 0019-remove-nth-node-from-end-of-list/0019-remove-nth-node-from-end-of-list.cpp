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
        ListNode* temp=head;
        int b=0;
        while(temp!=NULL){
            b++;
            temp=temp->next;
        }
        temp=head;
        //if(n==1){
          //  while(temp->next!=NULL){
            //temp=temp->next;
            //}
            //free(temp->next);
            //temp->next=NULL;
        //}
        if(b==n){
            ListNode* cur=head;
            head=head->next;
            //ListNode* cur=temp->next;
           // free(cur);
        }
        else{
            temp=head;
            for(int i=1;i<b-n;i++){
                temp=temp->next;
            }
            ListNode* cur=temp->next;
            temp->next=cur->next;
            //ListNode* cur=temp->next;
            //free(cur);
        }
        return head;
    }
};