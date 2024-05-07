// link : https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/
// type : MEDIUM
// concept : Linked List,






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
      ListNode *root = head,*prev=NULL,*next=NULL; 
      while(root!=NULL){
        next=root->next;
        root->next = prev;
        prev= root;
        root = next;
      }
      head=prev;
      root = head;
      int carry=0, addition;
      while(root!=NULL){
        
        addition = (root->val * 2)+ carry;
        root->val = addition%10;
        carry = addition / 10;
        root=root->next;
      }
     ListNode *root2 = head,*prev2=NULL,*next2=NULL; 
      while(root2!=NULL){
        next2=root2->next;
        root2->next = prev2;
        prev2= root2;
        root2 = next2;
      }
      head=prev2;
      if(carry>0){
        ListNode* newNode = new ListNode(carry,head);
        return newNode;
      }
      return head;
    }
};
