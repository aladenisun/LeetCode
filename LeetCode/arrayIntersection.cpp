#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       /*
       - sort the arrays and create i&j indexes
       - while(i != size1 and i != size2){
            - if nums1[i] == nums2[j] then result.push_back(nums1[i])
            -else if (nums1[i] < nums2[j]) then i++;
            -else j++;
       }
       */
       
       sort(nums1.begin(), nums1.end());
       sort(nums2.begin(), nums2.end());
       
       int i = 0;
       int j = 0;
       
       vector<int> result;
       
       while(1){
       if( i == nums1.size() || j == nums2.size()) break;
           if(nums1[i] == nums2[j]){
               result.push_back(nums1[i]);
               i++;
               j++;
           }
           else if(nums1[i] < nums2[j]) i++;
           else j++;
       }
       
       return result;
   }
};

int main(){
    vector<int>nums1 = {1,2,2,1};
    vector<int>nums2 =  {2,2};

    vector<int> ret;
    
    Solution Example;
    
    ret = Example.intersect(nums1, nums2);
    
      printf("[");
         
         for(int i=0; i<ret.size(); i++){
             printf("%i", ret[i]);
         }
          printf("]");
}




