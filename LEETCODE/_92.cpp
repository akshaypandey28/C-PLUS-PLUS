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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        // ListNode* head1=head;
        // ListNode* head2=head1;
        // int count=0;
        // while(count<left-2){
        //     head1=head1->next;
        // }
        // ListNode* prev=NULL;
        // ListNode* curr=head1;
        
        // int count1=0;
        // while(curr!=NULL && count1<=(right-left) ){
        //    ListNode* temp=curr->next;
        //     curr->next=prev;
        //     prev=curr;
        //     curr=temp;
        // }
        // head1->next=prev;
        // while(head1->next!=NULL){
        //     head1=head1->next;
        // }
        // head1->next=curr;
        // head=head2;
        // return head;
        ListNode* temp=head;
        int size=0;
        while(temp!=NULL){
            temp=temp->next;
            size++;
        }
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
           ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        ListNode* head1=head;
        int count=0;
        ListNode* head2=head1;
        while(count<left-1 && head1!=NULL){
           head1=head1->next;
        }
        count=0;
        while(count<(size-right-1) && prev!=NULL){
            prev=prev->next;
        }
        head1->next=prev;
        count=0;
        while(count<(right-left) && head1!=NULL){
            head1=head1->next;
        }
        temp=head;
        count=0;
        while(count<right && temp!=NULL){
            temp=temp->next;
        }
        head1->next=temp->next;
        head=head2;
        return head;


        


    }
};