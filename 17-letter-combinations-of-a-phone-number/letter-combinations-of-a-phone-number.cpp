class Solution {
public:
    void combination(string digits,map<int,vector<string>> mpp,vector<string> &v,int i,string &k)
    {
        if(i==digits.size())
        {
            v.push_back(k);
            return;
        }
        char c=digits[i];
        for(int m=0;m<mpp[c-'0'].size();m++)
        {
            string a=k;
            k+=mpp[c-'0'][m];
            combination(digits,mpp,v,i+1,k);
            k=a;
        }
    }
    vector<string> letterCombinations(string digits) {
        map<int,vector<string>> mpp;
        mpp[2]={"a","b","c"};
        mpp[3]={"d","e","f"};
        mpp[4]={"g","h","i"};
        mpp[5]={"j","k","l"};
        mpp[6]={"m","n","o"};
        mpp[7]={"p","q","r","s"};
        mpp[8]={"t","u","v"};
        mpp[9]={"w","x","y","z"};
        vector<string> v;
        string k="";
        combination(digits,mpp,v,0,k);
        return v;

    }
};