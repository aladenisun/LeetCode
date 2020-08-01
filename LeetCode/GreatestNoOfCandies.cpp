
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
public:
 vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
     int max = 0;
     int check = 0;
     
     vector<bool> result;
     
     //Get maximum value in array: max = 5
     for(int i=0; i<candies.size(); i++){
         if(candies[i] > max) max = candies[i];
     }
     
    for(int j=0; j<candies.size(); j++){
        check = candies[j] + extraCandies;  // check = 2 + 3 = 5
        if (check >= max){
            result.push_back(true); // if 5 >
        }
        else { result.push_back(false);
              }
    }
     
     return result;
 }};

int main(){
    printf("Hello World");
    vector<int>arr = {2,3,5,1,3};

    vector<bool> ret;
    
    Solution Example;
    
    ret = Example.kidsWithCandies(arr, 3);
    
      printf("[");
    
    for(int i=0; i<ret.size(); i++){
         printf("%s", ret[i] ? "true" : "false");
    }
     printf("]");
}



