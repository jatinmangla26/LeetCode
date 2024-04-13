#include <bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);
    int prodTillNow = nums[0];
    for (int i = 1; i < n; i++)
    {
        ans[i] = prodTillNow;
        prodTillNow *= nums[i];
    }
    prodTillNow = nums[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        ans[i] = ans[i] * prodTillNow;
        prodTillNow = prodTillNow * nums[i];
    }
    return ans;
}
int main()
{
}