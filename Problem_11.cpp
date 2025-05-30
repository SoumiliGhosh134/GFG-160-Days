/*
 * Name: Soumili Ghosh
 * Github: SoumiliGhosh134
 * Linkedln: https://www.linkedin.com/in/soumili-ghosh-504a75313/
 */
class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
      
        int n = arr.size();
        int currMax = arr[0], currMin = arr[0], maxProd = arr[0];
        
        for (int i = 1; i < n; i++) {
            if (arr[i] < 0)
               swap(currMax, currMin);
            
            
            currMax = max(arr[i], currMax * arr[i]);
            currMin = min(arr[i], currMin * arr[i]);
            
            maxProd = max(maxProd, currMax);
            
        }
        
        return maxProd;
    }
};
