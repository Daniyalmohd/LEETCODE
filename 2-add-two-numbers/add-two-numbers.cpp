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
        
        int sum = l1->val + l2->val;
        int carry = sum/10;
        ListNode* l3 = new  ListNode(sum%10);
        ListNode* t1 = l1->next;
        ListNode* t2 = l2->next;
        ListNode* t3 = l3;
        
        while(t1!=NULL && t2!=NULL){
                sum = t1->val + t2->val + carry;
               ListNode* temp =  new ListNode(sum%10);
                carry = sum/10;
               t3->next = temp;
               t1 = t1->next;
               t2 = t2->next;
               t3 = t3->next;
        }
          while(t1!=NULL){
             sum = t1->val + carry;
            ListNode* temp = new ListNode(sum%10);
              carry = sum/10;
            t3->next = temp;
             t1 = t1->next;
            t3 = t3->next;
          }
           while(t2!=NULL){
             sum = t2->val + carry;
            ListNode* temp = new ListNode(sum%10);
             carry = sum/10;
            t3->next = temp;
            t2 = t2->next;
            t3 = t3->next;
          }
          if(carry){
             ListNode* temp = new ListNode(carry);
            t3->next = temp;
            
          }
        
         return l3;
    }
};