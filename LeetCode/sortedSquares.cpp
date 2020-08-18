

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        /*
        - create another array = result[index]
        - low and high
        - while (low <= high){
            - if ab(A[low] >= abs(A[high])) result[index] = A[low]*A[low]; low++;
            - else result[index] = A[high]*A[high]; high--;
            - decrement index
        }
        */
        
        vector<int> result;
        int size = A.size();
        
        int arr[size];
        int index = size-1;
        int high = size-1;
        int low = 0;
        
        if(A.size() == 0) return result;
        
        int abs1, abs2;
        
        while(low <= high){
             abs1 = abs(A[low]);
             abs2 = abs(A[high]);
            
            if(abs1 >= abs2){
                arr[index] = A[low]*A[low];
                low++;
            }
            else{
                 arr[index] = A[high]*A[high];
                high--;
            }
            index--;
        }
        
        int val = 0;
        for(int i=0; i<size; i++){
            val = arr[i];
            A[i] = val;
        }
            
     return A;
    }
};

int main(){
    printf("Hello World");
    vector<int>arr = {-7,-3,2,3,11};

    vector<int> ret;
    
    Solution Example;
    
    ret = Example.sortedSquares(arr);
    
      printf("[");
    
    for(int i=0; i<ret.size(); i++){
        printf("%i", ret[i]);
    }
     printf("]");
}



