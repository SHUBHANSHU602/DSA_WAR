class Solution {
public:
    int robHelper(vector<int>& nums, int start, int end, vector<int>& memo) {
        if (start > end) return 0;
        if (memo[start] != -1) return memo[start];

        // Choice: rob current house or skip it
        int rob = nums[start] + robHelper(nums, start + 2, end, memo);
        int skip = robHelper(nums, start + 1, end, memo);

        return memo[start] = max(rob, skip);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);

        // Case 1: Exclude last house
        vector<int> memo1(n, -1);
        int case1 = robHelper(nums, 0, n - 2, memo1);

        // Case 2: Exclude first house
        vector<int> memo2(n, -1);
        int case2 = robHelper(nums, 1, n - 1, memo2);

        return max(case1, case2);
    }
};
