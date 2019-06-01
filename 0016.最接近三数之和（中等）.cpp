//static int x = [](){ios::sync_with_stdio(false); cin.tie(nullptr); return 0; }();
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        /*
        int n = nums.size();
        //最小值输出
        int min = 0;
        //临时最小值存储，比较用
        int temp2 = INT_MAX;
        sort(nums.begin(),nums.end());
        int l, r;
        for(int i = 0; i < n-1; i++){
            l = i+1;
            r = n-1;
            while(l < r){
                //计算差值与上一次的比较
                int temp1 = abs(nums[i] + nums[l] + nums[r] - target);
                //要注意在自增或自减之前
                if(temp1 < temp2) {
                    temp2 = temp1;
                    min = nums[i] + nums[l] + nums[r];
                }
                if(nums[i] + nums[l] + nums[r] < target)l++;
                else if(nums[i] + nums[l] + nums[r] > target)r--;
                else {
                    return nums[i] + nums[l] + nums[r];
                }   
            }
        }
        return min;*/
        
        int n = nums.size();
        if(n<3) return {};
        int temp2 = INT_MAX;
        int min = 0;
        sort(nums.begin(),nums.end());
        int l, r;
        for(int i = 0; i < n-1; i++){
            l = i+1;
            r = n-1;
            while(l < r){
                //计算差值与上一次的比较
                int temp = nums[i] + nums[l] + nums[r] - target;
                int temp1 = abs(temp);
                //要注意在自增或自减之前
                if(temp1 < temp2) {
                    temp2 = temp1;
                    min = nums[i] + nums[l] + nums[r];
                }
                if(temp < 0) l++;
                else if(temp >0) r--;
                else {
                    return temp + target;
                }   
            }
        }
        return min;
    }
};
