
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        /*
        - create index iterator
        - multiply each value of the array by itself and store in current position
        - implement quick sort algorithm on new squared array
        */
        int index = 0;
        int size = A.size();
        
        while(index<size){
            A[index] = A[index]*A[index];
            index++;
        }
        
        quickSort(A, 0, size-1); //calling the quickSort function
            
     return A;
    }
    
    void quickSort(vector<int>&A, int low, int high){
        int part = 0;
        
        if(low < high){
            part = partition(A, low, high); //partition the entire array
            
            //Partitioning the partions of the array until sorted
            quickSort(A, low, part-1);
            
            quickSort(A, part+1, high);
        }
    }
    
    int partition(vector<int>&A, int low, int high){
        int pivot = A[high];
        
        int i = low-1;
        
        for(int j = low; j<=high-1; j++){
            if(A[j] <= pivot){
                i++;
                swap(A, i, j);
            }
        }
        
        int val = i+1;
        
        swap (A, val, high); //swap to get pivot in final positon
        return i+1; // return new partitioned index
    }
    
    void swap(vector<int>&A, int& a, int& b){
        int temp = 0;
        temp = A[a];
        A[a] = A[b];
        A[b] = temp;
    }
};


int main(){
    vector<int> nums = {-4,-1,0,3,10};
    vector<int> ret;
    
    Solution Example;
    
    ret = Example.sortedSquares(nums);
    
     printf("[");
      
      for(int i=0; i<ret.size(); i++){
          printf("%i", ret[i]);
      }
       printf("]");
}



