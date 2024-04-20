#include <bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int> &nums)
{
    int n = nums.size();
    int i = 0;
    int j = n - 1;
    
    while (i <= j)
    {
        int mid = i + ((j - i) / 2);
        if (mid == 0 || mid == n - 1)
            return mid;
        else if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1])
            return mid;
        else if (nums[mid] < nums[mid - 1])
            j = mid - 1;
        else
            i = mid + 1;
    }
    return -1;
}
int main()
{
}