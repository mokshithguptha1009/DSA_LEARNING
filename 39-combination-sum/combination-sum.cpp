class Solution {
public:
    void answer(vector<vector<int>> &v,vector<int> &candidates,int target,int k,vector<int> v1,int i)
    {
            if(k==target)
            {
                v.push_back(v1);
                return;
            }
            else if(i==candidates.size()) return;
        
        
        answer(v,candidates,target,k,v1,i+1);
        if(k+candidates[i]<=target){
        v1.push_back(candidates[i]);
        answer(v,candidates,target,k+candidates[i],v1,i);
        v1.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> v;
        vector<int> v1;
        answer(v,candidates,target,0,v1,0);
        return v;
    }
};