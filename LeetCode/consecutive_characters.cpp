#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxPower(string s) {
        int freq = 1;
        int power = 1;
        int current;
        
        /* if current == prev
            current ++; if current == prev then freq++;
            if not the same: then freq = 1 and power = freq;
            then start again :)
            
            l e e t c o d e
        */
        if (s.size() == 0) return 0;
        for(current=1; current<s.size(); current++){
            printf("current = %i\n", current);
            if (s[current] == s[current-1] ) freq++; // freq = 2
            else{
                freq = 1;
            }
            power = max(power, freq);

        }

        return power;
    }
};

int main(){
    printf("Hello World");
    string s = "leeeeeetccooooooodde";

    int ret;
    
    Solution Example;
    
    ret = Example.maxPower(s);
   
        printf("power = %i\n", ret);

}



