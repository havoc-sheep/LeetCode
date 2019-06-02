class Solution {
    //回溯法
    public List<String> generateParenthesis(int n) {
        List<String> res = new ArrayList<>();
        //注意初始化
        String str = new String();
        find(res, str, n, n);
        return res;
    }
    
    public void find(List<String> res, String s, int left, int right){
        if(left == 0 && right == 0){
            res.add(s);
            return;
        }
        if(left > 0){
            find(res, s+'(', left-1, right);
        }
        if(right > left){
            find(res, s+')', left, right-1);
        }
    }
}
