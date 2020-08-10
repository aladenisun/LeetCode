
#include <iostream>
#include <vector>
#include <unordered_map>
#include <ctype.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map <char, int> hashMap;
        int size1 = s.size();
        int size2 = t.size();
            
        if(s.empty() || t.empty()) return true;
        if(size1 != size2) return false;
            
        for(int j=0; j<size2; j++) hashMap[t[j]]++;
        for(int i=0; i<size1; i++) hashMap[s[i]]--;
        
        for(int k=0; k<hashMap.size(); k++){
            //printf("hash freq of %c = %i \n", s[k], hashMap[s[k]]);
            if(hashMap[s[k]] != 0 || hashMap[t[k]] != 0) return false;
        }
        
        return true;
        
    }
};

int main(){
    string s = "anagram";
    string t = "nagaram";
    
    bool ret;
    
    Solution Example;
    
    ret = Example.isAnagram(s, t)
         
    printf("Output = %s", ret ? "true" : "false");
         
}




