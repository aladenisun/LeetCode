
#include <iostream>
#include <vector>
#include <unordered_map>
#include <ctype.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        /*
        - use a hashmap
        - takes in each char and its freq and increments freq if char seen again
        - loop through mapp and the first char with freq 1 return freq
        */
        
        unordered_map <char, int> hashMap;
        
        int size = s.size();
        
        for(int i=0; i<size; i++){
            hashMap[s[i]]++;
        }
        
       // printf("hash freq of %c = %i \n", s[0], hashMap[s[0]]);
    
        for(int j=0; j<size; j++){
            if(hashMap[s[j]] == 1) return j;
        }
            return -1;
    }
};

int main(){
    string s = "leetcode";
    int ret = 0;
    
    Solution Example;
    
    ret = Example.firstUniqChar(s);
    
      printf("{");
         
    printf("Output = %i", ret);
         
}




