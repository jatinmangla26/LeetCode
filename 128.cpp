#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> &nums)
{
    map<int, bool> mp;
    int ans = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
        mp[nums[i]] = true;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(nums[i] - 1) != mp.end())
            mp[nums[i]] = false;
    }
    int i = 0;
    while (i < n)
    {
        if (mp[nums[i]])
        {
            int count = 0;
            int j = 0;
            while (mp.find(nums[i] + j) != mp.end())
            {
                j++;
                count++;
            }
            ans = max(ans, count);
        }
    }
    return ans;
}
int main()
{
}