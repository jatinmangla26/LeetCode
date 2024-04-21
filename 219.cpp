#include <bits/stdc++.h>
using namespace std;
bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    map<int, vector<int>> mp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (mp.find(nums[i]) != mp.end())
        {
            vector<int> v = mp[nums[i]];
            int x = v.size();
            for (int j = 0; j < x; j++)
            {
                if (abs(i - j) <= k)
                    return true;
            }
            v.push_back(i);
            mp[nums[i]] = v;
        }
        mp[nums[i]] = {i};
    }
    return false;
}
int main()
{
}