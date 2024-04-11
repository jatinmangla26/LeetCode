#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &nums)
{
    int count = 0;
    int ans = -1;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            ans = nums[i];
            count++;
        }
        else if (nums[i] == ans)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == ans)
            count++;
    }
    return count > n / 2 ? ans : -1;
}
int main()
{
}