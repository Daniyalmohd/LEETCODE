class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        
        int count = 0;
        int max_weight= weight[0];
        for(int i = 0;i<weight.size();i++){
            max_weight = max(weight[i],max_weight);
            if(weight[i]<max_weight){
            count++;
            if(i+1<weight.size()){
                max_weight = weight[i+1];
            }
            }

        }
        return count;
    }
};