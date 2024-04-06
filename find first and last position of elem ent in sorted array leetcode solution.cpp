class Solution {
public:
    
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        if(nums.size()==0) return {-1,-1};
        vector<int> res(2, -1);
        int left = 0, right = nums.size() - 1;
        while (left < right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] < target) left = mid + 1;
            else right = mid;
    }
        if (nums[left] != target) return res;
        res[0] = left;
        right = nums.size();
        while (left < right) 
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= target) left = mid + 1;
            else right= mid;
        }
        res[1] = left - 1;
        return res;
    }
};
