class Solution {
public:
   static bool compare(const vector<int> &k,const vector<int> &l)
    {
        if(k[0]*k[0]+k[1]*k[1] < l[0]*l[0]+l[1]*l[1]) return true;
        return false;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(),points.end(),compare);
        vector<vector<int>> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(points[i]);
        }
        return ans;
    }
};