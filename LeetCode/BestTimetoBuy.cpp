#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
int maxProfit(vector<int>& prices) {
    
    int maxprofit = 0;
    int i = 1;
    long length = prices.size();
    
   //printf("length = %i\n", length);
    if(length == 1) return 0;
    
    
    for(i = 1; i<length; i++){
        
        if (prices[i] > prices[i-1]) {
            
            maxprofit += prices[i] - prices[i-1] ;
            
        }
        
        printf("maxprofit = %i\n", maxprofit);
         
    }
    
    return maxprofit;
}};

int main(){
    printf("Hello World");
    vector<int>arr = {7,1,5,3,6,4};
    
    int ret = 0;
    
    Solution Example;
    
    ret = Example.maxProfit(arr);
    printf("ret = %i\n", ret);
}

