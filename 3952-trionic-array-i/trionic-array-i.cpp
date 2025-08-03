class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        int s = nums.size(),t=nums.size();
        bool p = false,q=false,r=false;
        int last = 0;
        for(int i = 0;i<n-2;i++){
            if(nums[i]<nums[i+1]){
                p = true;
            }
                else if(nums[i]==nums[i+1]){
                   return false;
                }
            else{
                s = i;
                break;
            }
        }
        for(int i = s;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                q=true;
            }
                else if(nums[i]==nums[i+1]){
                     return false;
                }
            else{
            t = i;
                break;
            }
        }
        for(int i = t;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                r = true;
                last = i;
            }
                else if(nums[i]==nums[i+1]){
                   return false;
                }
            else{
                
                break;
            }
        }
        if(p==true&&q==true&&r==true && last == n-2)
            return true;
        else
            return false;
    }
};