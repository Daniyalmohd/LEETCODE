class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
       
        int xora = nums[0];
        if(nums.size()==0){
            return 0;
        }
          int zero = 0;
          if(nums[0]==0){
            zero++;
          }
        for(int i =1;i<nums.size();i++){
          xora^=nums[i];
          if(nums[i]==0)
          zero++;
          
        }
        if(zero==nums.size())
        return 0;
       if(xora!=0)
           return nums.size();
        else
           return nums.size()-1;
    }
};