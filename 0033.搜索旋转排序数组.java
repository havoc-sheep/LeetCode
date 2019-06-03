class Solution {
    public int search(int[] nums, int target) {
        if(nums.length == 0) return -1;
        if(nums.length == 1)
            return nums[0] == target ? 0 : -1;
        int left = 0;
        int right = nums.length - 1;
        int mid = left + right/2;
        //计算分界点，即第二个数组的起点
        int index = index1(nums, left, right);
        //最小值为target
        if(nums[index] == target) return index;
        //数组没有旋转，直接二分查找
        if(index == 0) return binarySearch(nums, left, right, target);
        //说明target在右数组
        if(target <nums[left] ){
            return binarySearch(nums, index, right, target);   
        }
        return binarySearch(nums, left, index, target);
        
        
    }
 
    //查找两个数组的分界点，查到的是第二个数组的起点
    public int index1(int[] nums, int l, int r){
        if(nums[l] < nums[r]) return 0;
        while(r >= l){
            int mid = (l + r)/2;
            if(nums[mid] > nums[mid + 1]) return mid+1;
            else{
                if(nums[mid] < nums[l]) r = mid-1;
                else l = mid+1;
            }
        }
        return 0;
    }

    //查找一部分数组的二分查找
    public int binarySearch(int[] nums, int l, int r, int t){
        while(r >= l){
            int mid = (l+r)/2;
            if(nums[mid] > t) r = mid - 1;
            else if(nums[mid] < t) l = mid+1;
            else return mid;
        }
        return -1;
    }
}
