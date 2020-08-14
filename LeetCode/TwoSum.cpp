#include <iostream>
#include <vector>
#include <unordered_map>
#include <ctype.h>
#include <algorithm>
#include <set>
#include <iterator>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = 0;
        //vector<int>arr;
        
        for(i=0; i<nums.size(); i++){
            for(j=0; j<nums.size(); j++){
                if(i!=j){
                if((nums[i] + nums[j]) == target){
                    vector<int>arr = {i,j};
                    return arr;
                }
                }
            }
               
        }
        vector<int>arr;
        return arr = {-1};
    }
};

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;

    
      vector<int>  ret;
    
    Solution Example;
    
    ret = Example.twoSum(nums, target);
         
      printf("[");
        
        for(int i=0; i<ret.size(); i++){
            printf("%i", ret[i]);
        }
         printf("]");
         
}




