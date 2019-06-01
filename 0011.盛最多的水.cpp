class Solution {
public:
    int maxArea(vector<int>& height) {
        //采用双指针法，如果数组的指针中哪个数较小，就移那个数
        int n = height.size();
        if(n < 2) return 0;
        int l = 0;
        int r = n-1;
        int max = 0;
        int temp = 0;
        int min = 0;
        while(l < r){
            //计算哪个值小
            min = (height[r] > height[l])? height[l] : height[r]; 
            //计算面积
            temp = min*(r-l);
            if(height[r] > height[l]) l++;
            else r--;
            max = (max > temp)? max : temp;
        }
        return max;
        
    }
};
