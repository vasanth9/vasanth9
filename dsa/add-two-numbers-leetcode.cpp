// link : https://leetcode.com/problems/add-two-numbers/
// type : MEDIUM
// concept : Linked List






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
    ListNode* reverseList(ListNode* head){
        ListNode* current = head, *prev = NULL, *next = NULL;
        while(current!=NULL){
            next = current->next;
            current->next = prev;
            prev=current;
            current = next;
        }
        return prev;
    }
    int sizeLink(ListNode* root){
        int count = 0;
        while(root!=NULL){
            root=root->next;
            count++;
        }
        return count;
    }
    void printLink(ListNode* root){
        while(root!=NULL){
            cout<<root->val<<"\t";
            root=root->next; 
        }
        cout<<"\n";
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       int c1 = sizeLink(l1),c2 = sizeLink(l2);

        if(c1 > c2){
            ListNode * temp = l2;
            l2 = l1;
            l1 = temp;
        }
        int carry =0, addition;
        ListNode* ans = l2;
        while(l1!=NULL){
           addition =l2->val+l1->val+carry;
           l2->val = addition%10;
           carry = addition /10;
           if(carry && l2->next==NULL){
            ListNode * newNode = new ListNode(carry);
           l2->next = newNode;
           l2=NULL;
            break;
        }
           l1=l1->next;
           l2=l2->next;
            
        }
        while(l2!=NULL){
           addition = l2->val+carry;
           l2->val = addition%10;
           carry = addition /10;
if(carry && l2->next== NULL){
            ListNode * newNode = new ListNode(carry);
            l2->next = newNode;
            break;
        }
            l2=l2->next;
        }
        printLink(ans);
        return ans;
    }
};
