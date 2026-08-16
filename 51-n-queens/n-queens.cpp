class Solution {
public:
    bool issafe(vector<int> &v,int n,int Q,int a)
    {
        for(int b=0;b<Q;b++)
        {
            if(v[b]==a || abs(v[b]-a)==abs(Q-b)) return false;
        }
        return true;
    }
    void answer(vector<vector<string>> &ans,vector<int> &v,int n,int Q){
        if(Q==n)
        {
            vector<string> s1;
            for(int i=0;i<v.size();i++){
                string s="";
                for(int j=0;j<v[i];j++)
                {
                    s+=".";
                }
                s+="Q";
                for(int j=0;j<n-v[i]-1;j++)
                {
                    s+=".";
                }
                s1.push_back(s);
            }
        ans.push_back(s1);
        }
        for(int a=0;a<n;a++)
        {
            if(issafe(v,n,Q,a)){
                v[Q]=a;
                answer(ans,v,n,Q+1);
                v[Q]=-1;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<int> v(n,-1);
        answer(ans,v,n,0);
        return ans;
    }
};