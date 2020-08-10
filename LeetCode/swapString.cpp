
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  void reverseString(vector<char>& s) {
      /*
      - swap first and last then first++ and last++
      - loop again
      */
      
      int first = 0;
      int last = s.size()-1;
      
      while(first < last){
          swap(s[first], s[last]);
          first++;
          last--;
      }
      
  }
  
  void swap (char& a, char& b){
      char temp;
      temp = a;
      a = b;
      b = temp;
  }
};

int main(){
    vector<char>s {'h','e','l','l','o'};
    
    Solution Example;
    
    Example.reverseString(s);
    
      printf("{");
         
         for(int i=0; i<s.size(); i++){
             printf("%c", s[i]);
         }
          printf("}");
}




