 #include <iostream>
 #include <vector>
 #include <unordered_map>
 #include <ctype.h>
 #include <algorithm>
 #include <set>
 #include <iterator>

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        /*
        - creating curr and prev pointer to head of both lists
        - traverse both lists: while(curr1 != NULL & curr2 != NULL) {
            if(prev1 <= prev2) prev1->next = prev2; prev1 = curr1; curr1 == curr1->next;
            else(prev2 < prev1) prev2->next = prev1; prev2 = curr2; curr2 = curr2->next
        }
        -curr1 and curr2 are NULL so out of the loop
        -if(prev1 <= prev2)prev1->next = prev2;
        -else (prev2 < prev1) prev2->next = prev1;
        */
        
        if(l1 == NULL && l2 == NULL) return l1; //when both lists are empty
        if(l1 == NULL && l2 != NULL) return l2; // when L1 is empty
        if(l1 != NULL && l2 == NULL) return l1; //when L2 is empty
        
        ListNode *current;
        ListNode *n1 = l1;
        ListNode *n2 = l2;
        
        
        int setList = 0;
        
        if(n1->val <= n2->val){
            setList = 0;
            current = n1;
            n1 = n1->next;
        }
        else {
            setList = 1;
            current = n2;
            n2 = n2->next;
        }
        
        
        while(n1 != NULL && n2 != NULL){
          
            if(n1->val <= n2->val) {
                current->next = n1;
                current = n1;
                n1= n1->next;
            }
            else{
                current->next = n2;
                current = n2;
                n2 = n2->next;
            }
        }
        
       // printf("n2 = %i\n", n2->val);
        while(n2 != NULL && n1 == NULL){
            printf("this is current = %i\n", current->val);
            current->next = n2;
            current = n2;
            n2 = n2->next;
        }
        
        while(n1 != NULL && n2 == NULL){
            current->next = n1;
            current = n1;
            n1 = n1->next;
        }
        
          while(n2 != NULL && n1 == NULL){
            current->next = n1;
            current = n1;
            n1 = n1->next;
        }
      
        if(setList == 0) return l1;
        else return l2;
         
    }
};

void push(ListNode** head_ref, int new_data)
{
    ListNode* new_node = new ListNode();
  
    new_node->val = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

int main(){
    ListNode *head1 = NULL;
    ListNode *head2 = NULL;
    
    push(&head1, 1);
    push(&head1, 2);
    push(&head1, 3);
    
        push(&head2, 1);
       push(&head2, 2);
       push(&head2, 4);
      
    
    Solution Example;
   ListNode *current = Example.mergeTwoLists(head1, head2);
    
    while(current != NULL){
        printf("%i - ",current->val);
        current = current->next;
    }
}



