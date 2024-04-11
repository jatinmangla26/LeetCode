#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices)
{
    int ans = 0;
    int n = prices.size();
    int maxSell = prices[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        ans = max(ans, maxSell - prices[i]);
        maxSell = max(maxSell, prices[i]);
    }
    return ans;
}
int main()
{
}