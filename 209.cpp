#include <bits/stdc++.h>
using namespace std;
int minSubArrayLen(int target, vector<int> &nums)
{
    int n = nums.size();
    int ans = INT_MAX;
    int i = 0;
    int j = 0;
    int sum = 0;
    while (j < n)
    {
        sum += nums[j];
        if (sum < target)
            j++;
        else if (sum == target)
        {
            ans = min(ans, j - i + 1);
            sum -= nums[i];
            i++;
            j++;
        }
        else
        {
            while (i < n and sum > target)
            {
                sum -= nums[i];
                i++;
            }
            if (sum == target)
            {
                ans = min(ans, j - i + 1);
                sum -= nums[i];
                i++;
            }
            j++;
        }
    }
    return ans == INT_MAX ? 0 : ans;
}
int main()
{
}