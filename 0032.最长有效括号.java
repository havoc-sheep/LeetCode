class Solution {
    public int longestValidParentheses(String s) {
        // int max = 0;
        // int dp[] = new int[s.length()];
        // for(int i=1; i < s.length(); i++){
        //     if(s.charAt(i) == ')'){
        //         //()()
        //         if(s.charAt(i-1) == '('){
        //             dp[i] = (i >=2 ? dp[i-2] : 0) +2;
        //             //处理类似(())
        //         }else if(i - dp[i-1] > 0 && s.charAt(i - dp[i-1] - 1) == '('){
        //             dp[i] = dp[i-1] + ((i - dp[i-1]) >=2 ? dp[i-dp[i-1]-2] : 0) +2;
        //         }
        //     }
        //     max = Math.max(max, dp[i]);
        // }
        // return max;
        int left = 0, right = 0;
        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') {
                left++;
            } else {
                right++;
            }
            if (left == right) {
                result = Math.max(result, left * 2);
            }
            if (right > left) {
                left = right = 0;
            }
            
        }
        left = right = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s.charAt(i) == '(') {
                left++;
            } else {
                right++;
            }
            if (left == right) {
                result = Math.max(result, left * 2);
            }
            if (right < left) {
                left = right = 0;
            }

        }
        return result;
    }
    
}
