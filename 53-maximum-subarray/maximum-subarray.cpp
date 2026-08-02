class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int total=INT_MIN;
        int sum=0;
        int i=0;
        while(i<nums.size())
        {
            sum+=nums[i];
            if(total<sum) total=sum;
            if(sum<0) sum=0;
            i++;
        }
        return total;
    }
};