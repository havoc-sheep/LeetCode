class Solution {
public:
    int reverse(int x) {
        if(x > INT_MAX || x < INT_MIN) return 0;
        //针对数字进行取模操作
        long num = 0;
        int temp = 0;
        while(x != 0){
            temp = x%10;
            x /= 10;
            num = num*10 + temp;
            //还有一种方法判断是否溢出，每次都比较是否值已经溢出 
            //if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
        }
        //针对溢出
        if(num > INT_MAX || num < INT_MIN) return 0;
        return num;
        
    }
};
