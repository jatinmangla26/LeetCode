#include <bits/stdc++.h>
using namespace std;
bool isPossibleWithDays(vector<int> weights, int days, int capacity)
{
    int ans = 0;
    int weight = 0;
    int n = weights.size();
    for (int i = 0; i < n; i++)
    {
        if (weights[i] > capacity)
            return false;
        weight += weights[i];
        if (weight > capacity)
        {
            weight = weights[i];
            ans++;
        }
    }
    return ans <= days ? true : false;
}
int shipWithinDays(vector<int> &weights, int days)
{
    int i = 0;
    int j = INT_MAX;
    int ans = 0;
    while (i <= j)
    {
        int mid = i + (j - i) / 2;
        if (isPossibleWithDays(weights, days, mid))
        {
            ans = mid;
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }
    return ans;
}
int main()
{
}