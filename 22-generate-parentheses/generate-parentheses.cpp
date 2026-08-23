class Solution {
public:
    void solver(int n,vector<string> &ans,char a,char b,int a1,int b1,string &s)
    {
        if(a1==n && b1==n)
        {
            int k=0;
            int flag=0;
            for(int i=0;i<2*n;i++)
            {
                if(s[i]==a) flag++;
                else flag--;
                 
                if(flag==-1) k=1;
            }
            if(k==0)
            {
                ans.push_back(s);
                return;
            }
        }
        if(a1!=n)
        {
            s.push_back(a);
            solver(n,ans,a,b,a1+1,b1,s);
            s.pop_back();
        }
        if(b1!=n && a1>b1)
        {
            s.push_back(b);
            solver(n,ans,a,b,a1,b1+1,s);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        char a='(';
        char b=')';
        string s="";
        solver(n,ans,a,b,0,0,s);
        return ans;
    }
};