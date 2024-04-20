#include <bits/stdc++.h>
using namespace std;
vector<int> nearestSmallestLeft(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(n, 0);
    ans[0] = -1;
    stack<pair<int, int>> st;
    st.push({0, nums[0]});
    for (int i = 1; i < n; i++)
    {
        int x = nums[i];
        while (!st.empty() && st.top().second >= x)
            st.pop();
        if (st.empty())
            ans[i] = -1;
        else
            ans[i] = st.top().first;
        st.push({i, nums[i]});
    }
    return ans;
}

vector<int> nearestSmallestRight(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(n, 0);
    ans[n - 1] = n;
    stack<pair<int, int>> st;
    st.push({n - 1, nums[n - 1]});
    for (int i = n - 2; i >= 0; i--)
    {
        int x = nums[i];
        while (!st.empty() && st.top().second >= x)
            st.pop();
        if (st.empty())
            ans[i] = n;
        else
            ans[i] = st.top().first;
        st.push({i, nums[i]});
    }
    return ans;
}
int largestRectangleArea(vector<int> &heights)
{
    vector<int> left = nearestSmallestLeft(heights);
    vector<int> right = nearestSmallestRight(heights);
    int n = heights.size();
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, (heights[i]) * (right[i] - left[i]));
    }
    return ans;
}
int main()
{
}