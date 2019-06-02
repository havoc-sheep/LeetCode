class Solution {
    public int strStr(String haystack, String needle) {
        char[] hay = haystack.toCharArray();
        char[] need = needle.toCharArray();
        int hayLen = haystack.length();
        int needLen = needle.length();
        if(hayLen < needLen) return -1;
        if(needLen == 0) return 0;
        //空字符串
        for(int i = 0; i < hayLen; i++){
            int m = i;
            //注意j的取值，因为我是先变大后检测的
            for(int j=0; j <= needLen; j++){
                if(m == hayLen && j != needLen) return -1;
                if(m <= hayLen && j == needLen) return i;
                if(hay[m] == need[j]){
                    m++;
                    continue;
                }else{
                    break;
                } 
                
            }
        }
        return -1;
    }
    
    
        
}
