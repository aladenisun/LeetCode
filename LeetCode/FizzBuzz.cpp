#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        /*
        - loop through from 1 to n{
         create string output = "";
         
         if(i % 3 == 0) output += "Fizz";
         if(i % 5 == 0) output += "Buzz";
         
         if (output = "") output = i;
         printf(output);
        }
        */
        vector<string> result;
        
        for(int i=1; i<=n; i++){
            
            string output = "";
            
            if(i % 3 == 0) output +="Fizz";
            if(i % 5 == 0) output += "Buzz";
            
           
            if(output == "") output = to_string(i);
            
             printf("%s\n", output.c_str());
                result.push_back(output);
        }
        
        return result;
    }
};


int main(){
    vector<string> ret;
    int n = 1;
    
    Solution Example;
    
    ret = Example.fizzBuzz(n);
    
        printf("[");
            
            for(int i=0; i<ret.size(); i++){
                printf("%s", ret[i].c_str());
            }
             printf("]");
}



