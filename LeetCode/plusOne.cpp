#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> plusOne(vector<int>& digits) {
      /*
      - carry = 1, remainder, dividend, index = array size
      - loop around each index from the back: while carry != 0;
      - add carry to index digit; carry = add/10; remainder = add % 10;
      - digits[index] = remainder;
      - loop again
      */
    
      int carry = 1;
      int remainder = 0;
      int dividend = 0;
      int size = digits.size();
      int i = size-1;
      
           vector<int> result;
      
      
      while(carry == 1 && i >= 0){
          
          dividend = carry + digits[i];
        //  printf("dividend = %i\n", dividend);
          
          carry = dividend/10;
         // printf("carry = %i\n", carry);
          
          remainder = dividend % 10;
         // printf("remainder = %i\n", remainder);
          
          digits[i] = remainder;
         // printf("digits = %i\n", digits[i]);
          
         if (carry == 1 && i == 0){
                        result.push_back(1);
                        
                        for(int j=0; j<size; j++){
                            result.push_back(0);
                        }
                        return result;
                   }
                   
                   else i--;
           
               }
               
               return digits;
  }
};

int main(){
    vector<int>nums1 = {9,9,9};

    vector<int> ret;
    
    Solution Example;
    
    ret = Example.plusOne(nums1);
    
      printf("[");
         
         for(int i=0; i<ret.size(); i++){
             printf("%i", ret[i]);
         }
          printf("]");
}




