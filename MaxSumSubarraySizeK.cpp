#include <bits/stdc++.h>
using namespace std;
long maximumSumSubarray(int K, vector<int> &Arr, int N)
{
    int i = 0;
    int j = 0;
    int sum = 0;
    int ans = 0;
    while (j < N)
    {
        sum += Arr[j];
        if (j - i + 1 < K)
            j++;
        else
        {
            ans = max(ans, sum);
            sum -= Arr[i];
            i++;
            j++;
        }
    }
    return ans;
}
int main()
{
}