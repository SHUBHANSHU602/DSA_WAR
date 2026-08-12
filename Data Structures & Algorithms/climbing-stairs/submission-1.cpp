class Solution {
public:
 int solve(int m,vector<int>&ans){
    if(m==0 or m==1) return 1;
    if(ans[m]!=-1) return ans[m];

    return ans[m]=solve(m-1,ans)+solve(m-2,ans);

 }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
       return solve(n,dp);
    }
};
