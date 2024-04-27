#include <bits/stdc++.h>
using namespace std;
int robHelp(vector<int> &nums)
{
    int n = nums.size();
    vector<pair<int, int>> dp(n + 1);
    dp[0] = {0, 0};
    dp[1] = {nums[0], 0};
    for (int i = 2; i <= n; i++)
    {
        int robI = nums[i-1] + dp[i - 1].second;
        int notRobI = max(dp[i - 1].first, dp[i - 1].second);
        dp[i] = {robI, notRobI};
    }
    return max(dp[n].first, dp[n].second);
}

int rob(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return nums[0];

    vector<int> nums1, nums2;

    for (int i = 1; i < nums.size(); i++)
        nums1.push_back(nums[i]);

    for (int i = 0; i < nums.size() - 1; i++)
        nums2.push_back(nums[i]);

    int ans = robHelp(nums1);
    int ans2 = robHelp(nums2);

    return max(ans, ans2);
}
int main()
{
}