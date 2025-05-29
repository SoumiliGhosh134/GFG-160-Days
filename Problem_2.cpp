/*
 * Name: Soumili Ghosh
 * Github: SoumiliGhosh134
 * Linkedln: https://www.linkedin.com/in/soumili-ghosh-504a75313/
 */
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n = arr.size();
        int nonZeroIndex = 0;
        
        // Move all non-zero elements to the front
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                arr[nonZeroIndex++ ] = arr[i];
                
            }
        }
        
        // Fill remaining positions with zeros
        while (nonZeroIndex < n) {
            arr[nonZeroIndex++] = 0;
        }
    }
};
