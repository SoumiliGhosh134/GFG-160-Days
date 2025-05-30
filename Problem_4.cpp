/*
 * Name: Soumili Ghosh
 * Github: SoumiliGhosh134
 * Linkedln: https://www.linkedin.com/in/soumili-ghosh-504a75313/
 */
class Solution {
  public:
    
    void reverse(vector<int>& arr, int start, int end) {
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
       
        int n = arr.size();
        if (n == 0) return;
        
        d = d % n;
        
        // Step 1: Reverse first d elements
        reverse(arr, 0, d - 1);
        // Step 2: Reverse the rest
        reverse(arr, d, n - 1);
        // Step 3: Reverse the whole array
        reverse(arr, 0, n - 1);
    }
};
