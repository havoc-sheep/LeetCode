class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<vector<int>> res;
        if(size<4) return res;
        sort(nums.begin(),nums.end());
        //修改i的值
        for(int i = 0; i < size-3; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            //最小的三个数都大于目标值
            if(nums[i] + nums[i+1] + nums[i+2] + nums[i+3] > target){
                break;
            }
            //此时的i值与最大的三个数都小于目标值，直接跳过
            if(nums[i] + nums[size-1] + nums[size-2] + nums[size-3] < target){
                continue;
            }
            for(int j = i+1; j < size-2; j++){
                if(j > i+1 && nums[j] == nums[j-1]) continue;
                //最小的三个数都大于目标值
                if(nums[i] + nums[j] + nums[j+1] + nums[j+2] > target){
                    break;
                }
                //此时的i值与最大的三个数都小于目标值，直接跳过
                if(nums[i] + nums[j] + nums[size-1] + nums[size-2] < target){
                    continue;
                }
                int l = j+1;
                int r = size-1;
                while(l < r){
                    if(nums[i] + nums[j] + nums[l] + nums[r] == target){
                        res.push_back({nums[i], nums[j], nums[l], nums[r]});
                        while(l < r && nums[l] == nums[l+1]) l++;
                        while(l < r && nums[r] == nums[r-1]) r--;
                        l++, r--;
                    }else if(nums[i] + nums[j] + nums[l] + nums[r] < target){
                        l++;
                    }else{
                        r--;
                    }
                }
            }
        }
        return res;
        
    }
};
