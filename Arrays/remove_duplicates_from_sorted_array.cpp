class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
 set<int>s;
int i;
for(i=0;i<nums.size();i++)
s.insert(nums[i]);
int k=s.size();
nums.clear();
for(auto &it:s)
{
    nums.push_back(it);
}
return k;

    }
};