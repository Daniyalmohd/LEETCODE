class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        unordered_set<int>mpp(nums.begin(),nums.end());
        int result =0;
      
        for(int x:mpp){
           
            if(!mpp.contains(x-1)){
                    int ce =x;
                    int cs =1;
                while(mpp.contains(ce+1)){
                    ce++;
                    cs++;
                }
                result = max(result,cs);
            }
           

        }
        return result;
    }
};