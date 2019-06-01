class Solution {
    public boolean isValid(String s) {
        //字符串用length()
        int len = s.length();
        if(len % 2 != 0) return false;
        Stack<Character> stack = new Stack<>();
        for(int i =0; i < len; i++){
            //要转换为单字符
            char ch = s.charAt(i);
            if(ch == '(' || ch == '[' || ch == '{'){
                stack.push(ch);
            }else{
                if(stack.isEmpty()) return false;
                char top = stack.pop();
                if(ch==')' && top != '(') return false;
                if(ch==']' && top != '[') return false;
                if(ch=='}' && top != '{') return false;
            }
        }
        return stack.isEmpty();
    }
}
