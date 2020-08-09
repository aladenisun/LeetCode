

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
     bool containsDuplicate(vector<int>& nums) {
           /*
           - condion if array is empty
           -
           */
           int size = nums.size();
           
           if(size == 0 || size == 1) return false;
           
           sort(nums.begin(), nums.end());
           
           int check = 0;
           
           for(int i=1; i<size; i++){
               
               if(nums[i] == nums[i-1]){
                   check = 1;
                   break;
               }
           }
           
           if(check == 1) return true;
           
           return false;
       }
};

int main(){
    printf("Hello World");
    vector<int>arr = {1,2,3,1};

    bool ret;
    
    Solution Example;
    
    ret = Example.containsDuplicate(arr);
    
      printf("Output = %s\n", ret? "true": "false");
}



