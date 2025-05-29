#include <iostream>
#include <vector>
#include <algorithm> // for reverse()

using namespace std;


class Solution {
public:

   vector<int> nextPermutation(vector<int>& arr) {
    
    int n = arr.size();
    int i = n - 2;
    
    // Step 1: Find the first decresing element from the end
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
        
    }
    
    // Step 2: If not the last permutation
    if (i >= 0){
        int j = n- 1;
        // Step 3: Find the element just greater than arr[i]
        while (arr[j] <= arr[i]){
            j--;
            
        }
        swap(arr[i], arr[j]);
        
    }
    
    // Step 4 : Reverse the suffix starting at i + 1
    reverse(arr.begin() + i + 1, arr.end());
    
    return arr;
    
  }

    
};

// Helper function to print the array 
void printArray(const vector<int>& arr) {
    for (int num : arr) {
       cout << num << " ";
    }
    
    cout << endl;
    
}

