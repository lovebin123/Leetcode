class Solution {
public:
    int myAtoi(string s) {
      stringstream obj;
      int n;
      obj<<s;
      obj>>n;
      return n;
    }
};