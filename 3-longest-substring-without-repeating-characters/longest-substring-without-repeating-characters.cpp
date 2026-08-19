class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mpp;
        int i=0;
        int j=0;
        int total=0;
        int sum=0;
        while(j<s.size())
        {
            if(mpp[s[j]]>=1){
                while(i<j)
                {
                    if(s[i]==s[j])
                    {
                        mpp[s[i]]--;
                        i++;
                        break;
                    }
                    else{
                        mpp[s[i]]--;
                        i++;
                    }
                }
            }
            else{
                mpp[s[j]]++;
                total=max(total,j-i+1);
                j++; 
            }   
                 
        }
        return total;
    }
};