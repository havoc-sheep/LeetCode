class Solution {
public:
    string convert(string s, int numRows) {
        int len = s.size();
        string res;
        if(len <= 0 || numRows<2 ) return s;
        int zSize = 2*numRows - 2;  //两个z之间的间隔
        for(int i = 0; i < numRows; i++){
            for(int j = i; j < len; j +=zSize){  //注意后面是个 +=
                res += s[j];
                if(i != 0 && i != numRows-1 && j+zSize-i*2 < len){
                    res += s[j+zSize-i*2];
                }
            }
        }
        return res;
        
    }
};
