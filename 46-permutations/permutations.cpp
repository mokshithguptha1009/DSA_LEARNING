class Solution {
public:
    void answer(vector<vector<int>> &ans,vector<int> &z,int i)
    {
        if(i==z.size())
        {
            ans.push_back(z);
            return;
        }
        for(int k=i;k<z.size();k++)
        {
            swap(z[i],z[k]);
            answer(ans,z,i+1);
            swap(z[i],z[k]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> z=nums;
        answer(ans,z,0);
        return ans;
    }
};