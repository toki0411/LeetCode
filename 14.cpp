class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        bool key = false;
        string s;
        if(strs.size()==0&&strs[0]=="")return "";
        for(int k=0;k<strs[0].length();k++){
            
            for(int i=0;i<strs.size();i++){
                if(strs[0][k]!=strs[i][k]){
                    key = true; break;
                }
            }
            if(key)break;
            else s += strs[0][k];
            key = false;
        }
        if(s.length()==0)return "";
        else return s;
        
    }
};
