class Solution {
    public int divide(int dividend, int divisor) {
        //除法的特性
        //提前将越界的值为特例
        if(dividend==-2147483648 && divisor==-1) return 2147483647;
        if(dividend==-2147483648 && divisor==1) return -2147483648;
        long a = Math.abs((long)dividend);
        long b = Math.abs((long)divisor);
        int ans = 0;
        //核心代码
        while(a >= b){
            int flag = 1;
            long temp = b;
            while(a >= temp){
                a -= temp;
                ans += flag;
                temp = temp << 1;
                flag = flag << 1;
                /*
                temp += temp;
                flag += flag;*/              
            }
        }        
        //符号相反
        if(dividend > 0 && divisor < 0) return -ans;
        if(dividend < 0 && divisor > 0) return -ans;
        return ans;
    }

}
