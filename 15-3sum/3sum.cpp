class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int m=INT_MIN;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]==m) continue;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                int z=nums[i]+nums[j]+nums[k];
                if(z>0) k--;
                else if(z<0) j++;
                else{
                    vector<int> v={nums[i],nums[j],nums[k]};
                    ans.push_back(v);
                    int a=nums[j];
                    int b=nums[k];
                    while(j<k){
                        if(nums[j]==a) j++;
                        else if(nums[k]==b) k--;
                        else break;
                    }
                }
            }
            m=nums[i];
        }
        return ans;
    }
};