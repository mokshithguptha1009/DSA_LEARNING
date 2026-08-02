class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-1;
        int k=0;
        while(i>=1){
            if(nums[i]>nums[i-1]){
                k=i-1;
                break;
            }
            i--;
        }
        if(i==0)
        {
            reverse(nums.begin(),nums.end());
        }
        else{
            int small=INT_MAX;
            int index;
            for(int j=k+1;j<nums.size();j++)
            {
                if(nums[j]>nums[k]){
                    small=min(small,nums[j]);
                    index=j;
                }
            }
            swap(nums[k],nums[index]);
            sort(nums.begin()+k+1,nums.end());
        }
      
    }
};