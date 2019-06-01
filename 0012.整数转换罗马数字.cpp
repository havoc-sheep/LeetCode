class Solution {
public:
    string intToRoman(int num) {
        //使用哈希的方法,使用中括号
        string res;
        int values[] = {1000,900, 500, 400,100,90,  50,  40, 10,  9,   5,  4,  1};
        string reps[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        for(int i = 0; i < 13; i++){
            while(num >= values[i]){
                num -= values[i];
                res += reps[i];
            }
        }
        return res;
    }
};
