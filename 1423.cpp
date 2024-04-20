#include <bits/stdc++.h>
using namespace std;
int maxScore(vector<int> &cardPoints, int k)
{
    int sum = 0;
    int ans = 0;
    int n = cardPoints.size();
    int i = 0;
    int j = n - 1;
    for(int i=0;i<k;i++)
    sum+=cardPoints[i];
    ans = sum;
    i=k-1;
    cout<<i<<" "<<j<<endl;
    while (i >= 0)
    {
        cout<<sum<<endl;
        sum = sum - cardPoints[i] + cardPoints[j];
        ans = max(ans, sum);
         i--;
         j--;
    }
    return ans;
}
int main()
{
}