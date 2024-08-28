/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode {
     int val;
     struct ListNode *next;
  };

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* l3, head;
    l3->val=0;
    l3->next='\0';
    head.next = l3;
    int carry, last, sum;
    while(l1->next != '\0' || l2->next != '\0'){
        sum=0;
        if(l1->next != '\0'){
            sum += l1->val;
        }
        if(l1->next != '\0'){
            sum += l2->val;
        }
        if(sum > 9){
            last = sum%10;
        }
        carry = sum/10;
        l3->val=last;
        struct ListNode* l;
        l->next='\0';
        l3->next=l;     
        


    }
}