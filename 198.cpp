#include <bits/stdc++.h>
using namespace std;
int rob(vector<int> &nums)
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

int main()
{
}