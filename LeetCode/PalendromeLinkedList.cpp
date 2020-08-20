
 #include <iostream>
 #include <vector>
 #include <unordered_map>
 #include <ctype.h>
 #include <algorithm>
 #include <set>
 #include <iterator>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        /*
        conditions:
        - list has 1 value
        - list is empty.
        
        algorithm:
        - create a vector
        - traverse through the linked list and pushback into the vector
        - compare the vector and the linked list
        */

        vector<int> array;
        ListNode* current = head;
        
        while(current != NULL){
            array.push_back(current->val);
            current = current->next;
        }
        
        int first = 0;
        int last = array.size()-1;
         
        
        while(first <= last){
            if(array[first] == array[last]) {
                first++;
                last--;
                continue;
            }
            else{
                return false;
            }
        }
             return true;
        
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
    ListNode *head = NULL;
    
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    
    Solution Example;
    bool res = Example.isPalindrome(head);
    

        printf("Output: %s\n", res? true:false);

}



