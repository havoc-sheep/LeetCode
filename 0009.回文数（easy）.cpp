class Solution {
public:
    bool isPalindrome(int x) {
        //负数全为false
        if(x < 0) return false;
        
        /*
        //字符串方法
        string str;
        int temp = x;
        while(temp != 0){
            //+=代表直接整数存入
            str += temp%10;
            temp /= 10;
        }
        int len = str.size();
        //会有溢出的情况
        long num = 0;
        //注意使用单引号
        for(int j = 0; j < len; j++){
            //不是字符方式读入整数
            num = num*10 + str[j];
        }
        if(num == x) return true;
        return false;*/
        
        //不用字符串,时间较慢
        long num = 0;
        int i = 0;
        int temp = x;
        while(temp != 0){
            i = temp%10;
            num = num*10 + i;
            temp /= 10;
        }
        if(num == x) return true;
        return false;
    }
};
