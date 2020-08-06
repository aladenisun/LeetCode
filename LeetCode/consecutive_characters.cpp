#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxPower(string s) {
        int freq = 1;
       // int power = 0;
        int prev, current;
        
        /* if current == prev
            current ++; if current == prev then freq++;
            if not the same: then power = freq and freq = 0;
            then start again :)
            
            l e e t c o d e
        */
        prev = 0;
        for(current=1; current<s.size(); current++){
            printf("current = %i and prev = %i\n", current, prev);
            if (s[current] == s[prev] ) freq++; // freq = 2
            else{
                freq = 1;
            }
            prev ++; // prev = 1
        }

        return freq+1;
    }
};

int main(){
    printf("Hello World");
    string s = "leetcode";

    int ret;
    
    Solution Example;
    
    ret = Example.maxPower(s);
   
        printf("%i\n", ret);

}



