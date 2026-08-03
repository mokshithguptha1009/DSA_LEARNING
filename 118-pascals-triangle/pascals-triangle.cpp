class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> v;
        v.push_back(1);
        vector<vector<int>> ans;
        ans.push_back(v);
        for(int i=0;i<numRows-1;i++)
        {
            vector<int> aa;
            int j=0;
            while(j<=i+1)
            {
                if(j==0) aa.push_back(1);
                else if(j<=i) aa.push_back(v[j-1]+v[j]);
                else aa.push_back(1);
                j++;
            }
            v=aa;
            ans.push_back(aa);
        }
        return ans;
    }
};