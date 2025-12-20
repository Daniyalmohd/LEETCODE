class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
      int max1 = m-1,max2 = n-1;
      
      int end = nums1.size()-1;
      while(max1>=0 && max2>=0){
        if(nums2[max2]>nums1[max1]){
            nums1[end] = nums2[max2];
            end-- ,max2--;
        }
        else{
            nums1[end] = nums1[max1];
            nums1[max1] = 0;
            max1--;
            end--;
        }
      }   
         while(max2!=-1){
            nums1[end] = nums2[max2];
            end-- ,max2--;
           
         }
    }
};