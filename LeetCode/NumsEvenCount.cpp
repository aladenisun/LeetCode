#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
 int findNumbers(vector<int>& nums) {
        /*
        - create count variable; result variable
        - iterate through array
        - while(nums[i] > 0) nums[i] = nums[i]/10; count++;
        - After each while loop if count%2 == 0 then result++;
        - count == 0
        -Eg:
                12/10 = 1
                 count = 1
                1/10 = 0
                count = 2
                1/10 = 0
                a = 3
        */
        int size = nums.size();
        int count = 0;
        int result = 0;
        
        for(int i=0; i<size; i++){
            while(nums[i] > 0) {
                nums[i] = nums[i]/10;
                count++;
            }
            if(count%2 == 0) result++;
            count = 0;
        }
 
         return result;
    }
   };


int main(){
    vector<int> nums = {555,901,482,1771};
    int ret;
    
    Solution Example;
    
    ret = Example.findNumbers(nums);
    
      printf("Output = %i\n", ret);
}



