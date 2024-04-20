#include <bits/stdc++.h>
using namespace std;
bool isMidPossible(vector<int> piles, int h, int mid)
{
    int time = 0;
    int n = piles.size();
    for (int i = 0; i < n; i++)
    {
        if (piles[i] % mid == 0)
            time += (piles[i] / mid);
        else
            time += (piles[i] / mid) + 1;
    }
    return time > h ? false : true;
}
int minEatingSpeed(vector<int> &piles, int h)
{
    int low = 1;
    int high = INT_MAX;
    int ans = 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (isMidPossible(piles, h, mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}
int main()
{
}