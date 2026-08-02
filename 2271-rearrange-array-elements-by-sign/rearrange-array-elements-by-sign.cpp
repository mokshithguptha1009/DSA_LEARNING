class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i=0;
        int j=1;
        vector<int> num(nums.size(),0);
        for(int k=0;k<nums.size();k++)
        {
            if(nums[k]>0){
                num[i]=nums[k];
                i+=2;
            }
            else{
                num[j]=nums[k];
                j+=2;
            }
        }
        return num;
    }
};