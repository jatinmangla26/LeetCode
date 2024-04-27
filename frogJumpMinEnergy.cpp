#include <bits/stdc++.h>
using namespace std;
int frogJump(int n, vector<int> &heights)
{
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;
    dp[1] = heights[1] - heights[0];
    for (int i = 2; i <= n; i++)
    {
        int x = dp[i - 1] + abs(heights[i - 1] - heights[i]);
        int y = dp[i - 2] + abs(heights[i - 2] - heights[i]);
        dp[i] = min(x, y);
    }
    return dp[n];
}
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        vector<int> heights;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            heights.push_back(x);
        }
        frogJump(n, heights);
    }
}