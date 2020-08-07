#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
 int isPrefixOfWord(string sentence, string searchWord) {
     
     /*
     - put the sentence in a stringstream; create count; size of searchWord
     - create a word that holds each word in the sentence
     - loop through putting the each word in sentence in the word variable
     - check to see if the word contain the substing searchword
     - if it does then return the count and if not, increment count
     */
     
     stringstream phrase(sentence);
     string word;
     long size = searchWord.size();
    // printf("size = %i\n", size);

     int count = 1;
     
     while(phrase >> word){  // puts the value in word
         //printf("word = %s\n", word.c_str());
         if(word.substr(0, size) == searchWord) { //check to see if the word has substring searchWord
             return count;  //return count;
         }
         count++;
     }
     
     return -1;
 }
   };


int main(){
    string sentence = "this problem is an easy problem";
    string searchWord = "pro";

    int ret;
    
    Solution Example;
    
    ret = Example.isPrefixOfWord(sentence, searchWord);
    
      printf("Output = %i\n", ret);
}



