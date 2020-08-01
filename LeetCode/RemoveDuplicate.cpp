#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
int removeDuplicates(vector<int>& nums){
    
    long len = nums.size();

    printf("len = %li\n", len);
    int i= 0, j = 0;
    if (len == 0) return 0;
    printf("I'm here1!\n");
    j=1;
    
        printf("I'm here2!\n");
         while(j < len){
         if(nums[i] != nums[j]) {
             nums[i+1] = nums[j];
             i++;
         }
        else{
        printf("I'm here3!\n");
            j = j+1;
    }
         }
    printf("i = %i\n", i);
    return i+1;
}
};

int main(){
    printf("Hello World");
    vector<int>arr = {1,1,2};
    int ret = 0;
    
    Solution Example;
    
    ret = Example.removeDuplicates(arr);
    printf("ret = %i\n", ret);
}
