

#include <iostream>
#include <vector>
#include <unordered_map>
#include <ctype.h>
#include <algorithm>
using namespace std;

class Solution {
public:
       int strStr(string haystack, string needle) {
          
            /*
            - outerloop: haystack ; innerloop: needle ; int index = 0;
            - traverse haystack index = i{
                while(j < needleSize) {
                    if(haystack[i] != needle[j]) break;
                    if (j == 0) index = i;
                    j++; break;
                }
                if(j == needleSize-1) break;
            }
            */
            
            if(needle.empty()) return 0;
            int i = 0; int j = 0;
            int nSize =needle.size();
            int hSize = haystack.size();
            
            if(hSize < nSize) return -1;
            
            for(i=0; i<= hSize-nSize; ++i){
                
                for(j = 0; j<nSize; ++j){
                    if(haystack[i+j] != needle[j]) break;
                }
       
                if(j == nSize)
                    return i;
            }
            
            return -1;
        }
};

int main(){
    string haystack = "hello";
    string needle = "ll";

    
    int ret;
    
    Solution Example;
    
    ret = Example.strStr(haystack, needle);
         
    printf("Output = %i", ret);
         
}




