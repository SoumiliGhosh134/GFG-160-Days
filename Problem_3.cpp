/*
 * Name: Soumili Ghosh
 * Github: SoumiliGhosh134
 * Linkedln: https://www.linkedin.com/in/soumili-ghosh-504a75313/
 */
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int left = 0;
        int right = arr.size() - 1;
        
        while (left < right) {
            // Swap elements
            swap(arr[left], arr[right]);
            
            left++;
            right--;
        }
    }
};
