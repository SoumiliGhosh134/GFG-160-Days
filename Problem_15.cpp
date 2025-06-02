/*
 * Name: Soumili Ghosh
 * Github: SoumiliGhosh134
 * Linkedln: https://www.linkedin.com/in/soumili-ghosh-504a75313/
 */


class Solution {
  public:
    string addBinary(string& s1, string& s2) {
       
       int i = s1.length() - 1;
       int j = s2.length() - 1;
       int carry = 0;
       string result = "";
       
       while (i >= 0 || j >= 0 || carry) {
           int bit1 = (i >= 0) ? s1[i--] - '0' : 0;
           int bit2 = (j >= 0) ? s2[j--] - '0' : 0;
           
           int sum = bit1 + bit2 + carry;
           
           result += (sum % 2) + '0';
           
           carry = sum / 2;
           
       }
       
       reverse(result.begin(), result.end());
       
       int pos = result.find_first_not_of('0');
       if(pos != string::npos)
          return result.substr(pos);
        else
          return "0"; 
    }
};
