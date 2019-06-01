class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();
        //两个特殊字符串
        if(len <= 0) return "";
        if(len == 1) return strs[0];
        string res;
        int j = 0;
        int i = 0;
        while(j < strs[0].size()){
            for(int i = 0; i < len-1; i++){
                if(strs[i][j] == strs[i+1][j]) continue;
                else return res;
            }
            res += strs[i][j];
            j++;
        }
      return res;       
    }
};
