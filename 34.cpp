#include <bits/stdc++.h>
using namespace std;
int firstOcc(vector<int> &nums, int target)
{
    int i = 0;
    int j = nums.size() - 1;
    while (i <= j)
    {
        int mid = i + ((j - i) / 2);
        if (nums[mid] > target)
            j = mid - 1;
        else if (nums[mid] < target)
            i = mid + 1;
        else
        {
            if (mid == 0 || target > nums[mid - 1])
                return mid;
            else
            {
                j = mid - 1;
            }
        }
    }
    return -1;
}
int lastOcc(vector<int> &nums, int target)
{
    int i = 0;
    int j = nums.size() - 1;
    while (i <= j)
    {
        int mid = i + ((j - i) / 2);
        if (nums[mid] > target)
            j = mid - 1;
        else if (nums[mid] < target)
            i = mid + 1;
        else
        {
            if (mid == nums.size() - 1 || target < nums[mid + 1])
                return mid;
            else
            {
                i = mid + 1;
            }
        }
    }
    return -1;
}
vector<int> searchRange(vector<int> &nums, int target)
{
    return {firstOcc(nums, target), lastOcc(nums, target)};
}
int main()
{
}