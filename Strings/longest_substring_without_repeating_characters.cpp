class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i,j;
        set<char>mp;
        i=0,j=0;
        int maxi=0;
        while(j<s.length())
        {
            while(mp.find(s[j])!=mp.end()){
            mp.erase(s[i]);
            i++;
            }
            mp.insert(s[j]);
            j++;
            if(mp.size()>maxi)
            maxi=mp.size();

        }
        return maxi;
    }
};