
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        vector<string> startCities;
        
        //All starting cities
        for(int i=0; i<paths.size(); i++){
            startCities.push_back(paths[i][0]);
        }
        
        string result;
        vector<string>::iterator it;
        
        for(int j=0; j<paths.size(); j++){
            it = find(startCities.begin(), startCities.end(), paths[j][1]);
            if(it == startCities.end())
                result = paths[j][1];
        }
        return result;
    }
};

int main(){
    vector<vector<string>> arr = {{"London","New York"},{"New York","Lima"},{"Lima","Sao Paulo"}};

    string ret;
    
    Solution Example;
    
    ret = Example.destCity(arr);
    
    
    printf("%s\n", ret.c_str());

}




