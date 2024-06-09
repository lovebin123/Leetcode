class Solution {
    public String longestCommonPrefix(String[] strs) {
        int i;
        Arrays.sort(strs);
        String st=strs[0];
        String st1=strs[strs.length-1];
        String ans="";
        for(i=0;i<st.length();i++)
        {
            if(st.charAt(i)==st1.charAt(i))
            ans=ans+st.charAt(i);
            else
            break;
            
        }
        return ans;
    }
}