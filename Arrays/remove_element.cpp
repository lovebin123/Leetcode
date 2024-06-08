class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int i,index;
      index=0;
      for(i=0;i<nums.size();i++)
      {
          if(nums[i]!=val)
          {
              nums[index]=nums[i];
              index++;
          }
      }
      return index;
    }
};