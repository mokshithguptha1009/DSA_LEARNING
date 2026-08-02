class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        s.insert(nums.begin(),nums.end());
        int total=0;
        int count=0;
        for(auto it:s)
        {
            if(s.find(it-1)==s.end())
            {
                count++;
                int k=it+1;
                while(s.find(k)!=s.end())
                {
                    count++;
                    k++;  
                }
                
                total=max(total,count);
                count=0;
            }
        }
        return total;
    }
};