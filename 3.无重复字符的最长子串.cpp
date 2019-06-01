//类似窗口滑动的效果
/*
a b c a e f b e c
i     j   max=3
  i         j max=5
    i         j max=5
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0, max=0;
        int j,k;
        int size = s.size();
        for(j = 0; j < size; j++){
            for(k = i; k<j; k++){
                if(s[k] == s[j]){
                    i = k+1;
                    break;
                }
            }
            if(j-i+1 > max){
                max = j-i+1;
            }
        }
        return max;
    }
};
