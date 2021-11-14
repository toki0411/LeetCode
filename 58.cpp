class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        string res;
        bool key = false;
        for(int i=len-1;i>=0;i--){
            if(s[i]!=' '){res+=s[i];key = true;}
            else if(s[i]==' '&&key)break;
        }
        
        return res.length();
    }
};
