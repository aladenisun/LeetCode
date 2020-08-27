

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int reverse(int x) {
     
        /*
        - mod = x % 10 to get the remainder  3
        - val = val*10 + mod;
        - x = x/10      12
        - loop: while x != 0
        */
        if (x >= 2147483647 || x<= - 2147483647) return 0;
            
        int mod = 0;
        int val = 0;
        
        while(x != 0){
            if (val > (2147483647/10) || val< (-2147483647/10)) return 0;
            mod = x%10;
            val = val*10 + mod;
            x = x/10;
        }
        return val;
    }
};
int main(){
    int ret = 0;
    
    Solution Example;
    
    ret = Example.reverse(123);
    
             printf("Output = %i", ret);
}
