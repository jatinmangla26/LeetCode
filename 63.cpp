#include <bits/stdc++.h>
using namespace std;
int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
{
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    vector<int> prev(n, 0);
    for (int i = 0; i < m; i++)
    {
        vector<int> temp(n, 0);
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0 && obstacleGrid[i][j] != 1)
                temp[j] = 1;
            else
            {
                int l = INT_MAX;
                int r = INT_MAX;
                if (i > 0 && obstacleGrid[i][j] != 1)
                    l = prev[j];
                if (j > 0 && obstacleGrid[i][j] != 1)
                    r = temp[j - 1];
                temp[j] = l + r;
            }
        }
        prev = temp;
        }
    return prev[n - 1];
}
int main()
{
}