#include "solution.h"
#include <iostream>
Solution::Solution()
{

}

ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2)
{
   ListNode *head = nullptr;
   ListNode *last = head;

   ListNode *p1 = l1;
   ListNode *p2 = l2;

   int carry = 0;
   while(p1 != nullptr || p2 != nullptr ){

       int sum = carry;
       if (p1 != nullptr) {
           sum += p1->val;
           p1 = p1->next;
       }
       if (p2 != nullptr) {
           sum += p2->val;
           p2 = p2->next;
       }

       ListNode *tmp = new ListNode(sum%10);

       if(head == nullptr){
           head = last = tmp;
       } else {
           last->next = tmp;
           last = tmp;
       }

       carry = sum > 9 ? 1 : 0;
   }
   if (carry == 1) {
   last->next = new ListNode(carry);
}
   return head;
}
