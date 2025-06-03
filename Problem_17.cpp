/*
 * Name: Soumili Ghosh
 * Github: SoumiliGhosh134
 * Linkedln: https://www.linkedin.com/in/soumili-ghosh-504a75313/
 */
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        
        int freq[26] = {0};
        queue<char> q;
        
        
        for (char c : s) {
            freq[c - 'a']++;
            q.push(c);
            
            while (!q.empty() && freq[q.front() - 'a'] > 1) {
                q.pop();
            }
        }
        
        
        return q.empty() ? '$': q.front();
    }
};
