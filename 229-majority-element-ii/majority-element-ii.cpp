class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int a;
        int b;
        int a1=0;
        int b1=0;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            
            if(nums[i]==a && a1>0) a1++;
            else if(nums[i]==b && b1>0) b1++;
            else if(a1==0)
            {
                a1=1;
                a=nums[i];
            }
            else if(b1==0)
            {
                b1=1;
                b=nums[i];
            }
            else{
                a1--;
                b1--;
            }
        }
        a1=0;
        b1=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==a) a1++;
            else if(nums[i]==b) b1++;
        }
        if(a1> floor(nums.size()/3)) v.push_back(a);
        if(b1> floor(nums.size()/3)) v.push_back(b);
        return v;
    }
};