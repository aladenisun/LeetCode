

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector <string> output;
        int j = 1;
        int i =0;
        
         /*get target and n; number of times you want to loop
              
              -push in the value
              -check if j is not the same as targets current value : push and pop
              -else push only and ncrement target index
              -n index [n has outer increment]
              -push next val
              
              */
        
        
           while(j <= n && i < target.size()){
                           printf("j = %i\n", j);
                           printf("target: %i\n", target[i]);
                           
                           if(j != target[i]) {
                               output.push_back("Push"); output.push_back("Pop");
                           }
                           else{
                               output.push_back("Push");
                               i++;
                           }
                           j++;
                           }
        
        return output;
    }
};

int main(){
    printf("Hello World");
    vector<int>arr = {2,3,4};

    vector<string> ret;
    
    Solution Example;
    
    ret = Example.buildArray(arr, 3);
    
      printf("[");
    
    for(int i=0; i<ret.size(); i++){
        printf("%s", ret[i].c_str());
    }
     printf("]");
}



