#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
   int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int output = 0;
        int i = 0;
        int size = startTime.size();
       
       // printf("size = %i\n", size);
        
        if(size == 0) return 0;
        
        while(i < size){
            if (startTime[i] <= queryTime && endTime[i] >= queryTime){
                output++;
            }
            i++;
        }
      
        return output;
    }
};

int main(){
    vector<int>startTime = {9,8,7,6,5,4,3,2,1};
    vector<int>endTime =  {10,10,10,10,10,10,10,10,10};
    int quaeryTime = 5;

    int ret;
    
    Solution Example;
    
    ret = Example.busyStudent(startTime, endTime, quaeryTime);
    
    
      printf("Output = %i\n", ret);
}



