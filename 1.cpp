#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    map<int, int> mp;
    int sum = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (mp.find(target - nums[i]) != mp.end())
        {
            return {mp[target - nums[i]], i};
        }
        mp[nums[i]] = i;
    }
    return {-1, -1};
}
int main()
{
}