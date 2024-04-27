#include <bits/stdc++.h>
using namespace std;
int minPathSum(vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();
    vector<int> prev(n, 0);
    for (int i = 0; i < m; i++)
    {
        vector<int> curr(n, 0);
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0)
                curr[j] = grid[0][0];
            else
            {
                int l = 0;
                int r = 0;
                if (i > 0)
                    l = prev[j];
                if (j > 0)
                    r = curr[j - 1];
                curr[j] = max(l, r) + grid[i][j];
            }
            prev = curr;
        }
    }
    return prev[n - 1];
}
int main()
{
}