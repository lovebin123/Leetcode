class Solution {
public:
    int maxArea(vector<int>& height) {
       int left,right;
       left=0;
       int diff;
       int maxi=0;
       int pro;
        int mini=0;
       right=height.size()-1;
       while(left<right)
       {
         
           diff=(right-left);
        mini=min(height[left],height[right]);
        pro=diff*mini;
        maxi=max(pro,maxi);
      if(height[left]<height[right])
      left++;
      else
      right--;
  
       }
       return maxi;
    }
};