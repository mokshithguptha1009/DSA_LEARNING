class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v;
        
        for(int i=0;i<=rowIndex;i++)
        {
            long long int res=1;
            for(int j=0;j<i;j++)
            {
                res=res*(rowIndex-j);
                res/=(j+1);
            }
            v.push_back(res);
        }
        return v;
    }
};