class Solution {
public:
    vector<string> letterCombinations(string digits) {
        //可以采用回溯的思路或动态规划的方法，有点类似中序遍历
        vector<string> res;
        string str;
        if(digits.size() < 1) return res;
        find(digits, str, 0, res);
        return res;
        
    }
    void find(string digits, string str, int index, vector<string>& res){
        //递归结束条件
        if(index == digits.size()){
            res.push_back(str);
            return;
        }
        //类似map
        string base[] = {"", "", "abc", "def", "ghi", "jkl","mno","pqrs","tuv","wxyz"};
        //每个字符串的个数
        for(int i = 0; i < base[digits[index] - '0'].size(); i++){
            //相当于二维数组，类似中序遍历
            str += base[digits[index] - '0'][i];
            find(digits, str, index+1, res);
            //开始回溯
            str.pop_back();
        }
    }
};
