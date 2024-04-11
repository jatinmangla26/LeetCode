#include <bits/stdc++.h>
using namespace std;
bool canJump(vector<int> &nums)
{
    int n = nums.size();
    vector<bool> isPossible(n, false);
    isPossible[0] = true;
    for (int i = 1; i < n; i++)
    {
        for (int j = i-1; j >= 0; j--)
        {
            if (isPossible[j] && j + nums[j] >= i)
            {
                isPossible[i] = true;
                break;
            }
        }
    }
    return isPossible[n - 1];
}

int main()
{
}