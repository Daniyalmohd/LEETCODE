class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        vector<int>ans;
        for(auto x : nums){
            freq[x]++;
        }
        for(int i = 0;i<k;i++){
            int currentmaxElement = INT_MIN;
            int currentmaxFreq = 0;
            for(auto x : freq){
                if(x.second > currentmaxFreq){
                    currentmaxElement = x.first;
                    currentmaxFreq = x.second;
                }
            }
            ans.push_back(currentmaxElement);
            freq.erase(currentmaxElement);

        }
        return ans;
    }
};