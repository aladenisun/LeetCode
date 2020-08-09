#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
 int findMaxConsecutiveOnes(vector<int>& nums) {
     /*
     - get size of array; create count variable; max variable
     - iterate through the array
     if:
     - check if the current value is 1 and update count++
     else:
     - if  (count > max) it is not 1 update max == count
     - main else: then always count == 0;
     - check again for 1s
     */
     
     int size = nums.size();
     int count = 0;
     int maxVal = 0;
     int i= 0;
     
     while (i < size){
         if(nums[i] == 1) count++;
         
         else{
             if(count > maxVal) maxVal = count;
             count = 0;
         }
         
         i++;
     }
     return max(maxVal, count);
 }
   };


int main(){
    vector<int> nums = {1,2,1,1,1,1,1,0,1};
    int ret;
    
    Solution Example;
    
    ret = Example.findMaxConsecutiveOnes(nums);
    
      printf("Output = %i\n", ret);
}



