//会问：正读与反读都一样
class Solution {
public:
    string longestPalindrome(string s) {
        //方法一：动态规划
        /*
        if (s.empty()) return "";
        int len = s.size();
        if (len == 1)return s;
        int longest = 1;
        int start=0;
        vector<vector<int> > dp(len,vector<int>(len));
        for (int i = 0; i < len; i++)
        {
            dp[i][i] = 1;
            if(i<len-1)
            {
                if (s[i] == s[i + 1])
                {
                    dp[i][i + 1] = 1;
                    start=i;
                    longest=2;
                }
            }
        }
        for (int l = 3; l <= len; l++)//子串长度
        {
            for (int i = 0; i+l-1 < len; i++)//枚举子串的起始点
            {
                int j=l+i-1;//终点
                if (s[i] == s[j] && dp[i+1][j-1]==1)
                {
                    dp[i][j] = 1;
                    start=i;
                    longest = l;
                }
            }
        }
        return s.substr(start,longest);*/
        //方法二：中心扩展法
        if (s.empty()) return "";
        int len = s.size();
        if (len == 1)return s;
        string res;
        int start = 0, end = 0;
        for(int i = 1; i < s.size(); i++){
            //偶数数组遍历方式，abba
            start = i - 1;
            end=i;
            while(start >=0 && end<s.size() && s[start]==s[end]){
                start--;
                end++;
            }
            int maxLen= (end-1)-(start+1)+1; //因为最后的是不相等的，但是还是进行了start--与end++操作
            if(maxLen > res.size()){
                res =s.substr(start+1, maxLen);//复制：起始位置， 复制个数
            }
            
            //奇数数组遍历方式ababa
            start = i - 1;
            end=i+1;
            while(start >=0 && end<s.size() && s[start]==s[end]){
                start--;
                end++;
            }
            maxLen= (end-1)-(start+1)+1; //因为最后的是不想等的，但是还是进行了start--与end++操作
            if(maxLen > res.size()){
                res =s.substr(start+1, maxLen);
            }
        }
        return res;
        
    }
};
