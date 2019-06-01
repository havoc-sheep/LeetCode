class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int> > res;
        if(n < 3) return res;
        //排序
        sort(nums.begin(), nums.end());
        //双指针
        int l,r;
        //i为最小的数，如果数组大于0，就都大于0了
        for(int i = 0;i < n-2; i++){
            if(nums[i] > 0) break;
            if(i > 0  && nums[i] == nums[i-1]) continue;
            l = i+1;
            r = n-1;
            while(l < r){
                if(nums[i] + nums[l] + nums[r] > 0) r--;
                else if(nums[i] + nums[l] + nums[r] < 0) l++;
                else{
                    res.push_back({nums[i], nums[l], nums[r]});
                    while(l < r && nums[l] == nums[l+1]) l++;
                    while(l < r && nums[r] == nums[r-1]) r--;
                    //要注意自增
                    l++, r--;
                }
            }
            //while(i < n-2 && nums[i] == nums[i+1]) i++;
        }
        return res;
        
    }
};
