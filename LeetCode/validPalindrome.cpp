
#include <iostream>
#include <vector>
#include <unordered_map>
#include <ctype.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        /*
        Conditions:
        - spaces not counted
        - empty string returns true
        - if size % 2 != 0 return false;
        
        Algortithm
        - create a first and last variables for indexes of s
        - check that the character is not a space; if not? then...
        - compare both first and last and if they are the same continue if not return false
        - return true
        */
        
        int first = 0;
        int last = s.size() - 1;
        int size = s.size();
        printf("size = %i\n", size);
        
        
        if (s.empty()) return true;
        if (size == 1) return true;
        
        
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        
        
        while(first < last){
            if(isspace(s[first]) || ispunct(s[first])) first++;
            else if(isspace(s[last]) || ispunct(s[last])) last--;
            else{
                printf("first = %c and last = %c\n", s[first], s[last]);
              if (s[first] != s[last]) return false;
                first++;
                last--;
            }
        }
        
        return true;
    }
};

int main(){
    string s = "anagram";
    
    bool ret;
    
    Solution Example;
    
    ret = Example.isPalindrome(s);
         
    printf("Output = %s", ret ? "true" : "false");
         
}




