
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
public:
 vector<int> shuffle(vector<int>& nums, int n) {
     //split the array in half - always even
      
     //index for y and x
     int x = 0; int y = n;
     int len = 2*n;
     
     vector<int> shuffle;
     
while(x < n && y < len){
    shuffle.push_back(nums[x]);
    shuffle.push_back(nums[y]);
    x++; y++;
}
     return shuffle;
 }};

int main(){
    printf("Hello World");
    vector<int>arr = {2,5,1,3,4,7};
    
    vector<int> ret;
    
    Solution Example;
    
    ret = Example.shuffle(arr, 3);
    
      printf("[");
    
    for(int i=0; i<ret.size(); i++){
         printf("%i, ", ret[i]);
    }
     printf("]");
}


