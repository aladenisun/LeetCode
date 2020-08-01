
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
vector<int> runningSum(vector<int>& nums) {
    //temp - holds the previous sum
    //1. use a for loop and loop once = O(n)
    
    int temp = 0;
    temp = nums[0]; //temp = 1;
    for(int i=1; i<nums.size(); i++){
        nums[i] = temp + nums[i]; //nums[1] = 3 + 3 = 6
        temp = nums[i]; // temp = 6
    }
return nums;
}};

int main(){
    printf("Hello World");
    vector<int>arr = {7,1,5,3,6,4};
    
    vector<int> ret;
    
    Solution Example;
    
    ret = Example.runningSum(arr);
    
      printf("[");
    
    for(int i=0; i<ret.size(); i++){
         printf("%i, ", ret[i]);
    }
     printf("]");
}

