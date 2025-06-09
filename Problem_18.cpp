/*
 * Name: Soumili Ghosh
 * Github: SoumiliGhosh134
 * Linkedln: https://www.linkedin.com/in/soumili-ghosh-504a75313/
 */

class Solution {
  public:
    vector<int> search(string pat, string txt) {
        // code here
        int n = txt.size(), m = pat.size();
        vector<int> lps(m, 0), res;
        
        // Build LPS array
        for (int i = 1, len = 0; i < m;)
           if (pat[i] == pat[len]) lps[i++] = ++len;
           else if (len) len = lps[len - 1];
           else lps[i++] = 0;
        
        // KMP search
        for (int i = 0, j = 0; i , n;) {
            if (txt[i] == pat[j]) i++, j++;
            if (j == m) res.push_back(i - j), j = lps[j - 1];
            else if (i < n && txt[i] != pat[j]) j ? j = lps[j - 1] : i++;
            
        }
        
        return res;
    }
};
