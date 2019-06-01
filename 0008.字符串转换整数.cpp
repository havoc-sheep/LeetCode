class Solution {
public:
    int myAtoi(string str) {
        int len = str.size();
        //i为判断段索引位置
        int i = 0;
        //去除空格
        while(str[i] == ' ' && i < len) i++;
        //判断是否为正负号
        bool is_minus = false;
        if(str[i] == '-' ) i++, is_minus = true;
        //防止出现-+1的情况使用 else if
        else if(str[i] == '+') i++;
        //直接看第一个字符是否为数字
        if(str[i] > '9' || str[i] < '0')return 0;
        //输出数字，用long
        long num = 0;
        int temp=0;
        while(i < len &&str[i] >= '0' && str[i] <= '9'){
            //str[i] - '0'可以显示为数字大小
            num = num*10 + str[i] - '0';
            i++;
            //判断溢出
            if(is_minus && (num*(-1)) <INT_MIN) return INT_MIN;
            if(!is_minus && num > INT_MAX) return INT_MAX;
        }
        if(is_minus) num *= -1; 
        return num;
    }
};
