#include <bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> &nums, int target)
{
    int i = 0;
    int j = nums.size() - 1;
    int ans = -1;
    while (i <= j)
    {
        int mid = i + ((j - i) / 2);
        if (nums[mid] > target)
        {
            j = mid - 1;
        }
        else if (nums[mid] < target)
        {
            ans = mid;
            i = mid + 1;
        }
        return mid;
    }
    return ans;
}
int searchInsert(vector<int> &nums, int target)
{
    int lower_bound = lowerBound(nums, target);
    return lower_bound + 1;
}
int main()
{
}