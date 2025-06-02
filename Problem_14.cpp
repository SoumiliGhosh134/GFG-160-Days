/*
 * Name: Soumili Ghosh
 * Github: SoumiliGhosh134
 * Linkedln: https://www.linkedin.com/in/soumili-ghosh-504a75313/
 */
class Solution {
  public:
    int myAtoi(string s) {
       
       int i = 0, n = s.length();
       long result = 0;
       int sign = 1;
       
       while (i < n && s[i] == ' ') {
           i++;
           
       }
       
       if (i < n && (s[i] == '+' || s[i] == '-')) {
           sign = (s[i] == '-') ? -1 : 1;
           i++;
       }
       
       while (i < n && isdigit(s[i])) {
           result = result * 10 + (s[i] - '0');
           
           if (sign == 1 && result > INT32_MAX) return INT32_MAX;
           if (sign == -1 && -result < INT32_MIN) return INT32_MIN;
           
           i++;
       }
       
       return static_cast<int>(sign * result);
    }
};
