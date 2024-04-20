#include <bits/stdc++.h>
using namespace std;
bool isDaysPossible(vector<int> arr, int m, int k, int days)
{
    int ans = 0;
    int count = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= days)
        {
            count++;
            if (count == k)
            {
                count = 0;
                ans++;
            }
        }
        else
        {
            count = 0;
        }
    }
    return ans >= m ? true : false;
}
int minDays(vector<int> &bloomDay, int m, int k)
{
    int i = 0;
    int j = INT_MAX;
    int ans = 0;
    int n = bloomDay.size();
    for (int k = 0; k < n; k++)
        j = max(j, bloomDay[k]);

    while (i <= j)
    {
        int mid = i + ((j - i) / 2);
        if (isDaysPossible(bloomDay, m, k, mid))
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