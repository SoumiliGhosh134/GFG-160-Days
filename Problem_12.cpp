/*
 * Name: Soumili Ghosh
 * Github: SoumiliGhosh134
 * Linkedln: https://www.linkedin.com/in/soumili-ghosh-504a75313/
 */
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {


       int n = arr.size();
       int totalSum = arr[0];
       
       
       int maxKadane = arr[0], currMax = arr[0];
       int minKadane = arr[0], currMin = arr[0];
       
       for (int i = 1; i < n; i++) {
          currMax = max(arr[i], currMax + arr[i]);
          maxKadane = max(maxKadane, currMax);
          
          currMin = min(arr[i], currMin + arr[i]);
          minKadane = min(minKadane, currMin);
          
          totalSum += arr[i];
          
       }
       
       // Edge case: All elements are negative
       if (maxKadane < 0) return maxKadane;
            
            
        return max(maxKadane, totalSum - minKadane);    
       
    
    }
};
