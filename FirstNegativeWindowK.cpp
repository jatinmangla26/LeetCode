#include <bits/stdc++.h>
using namespace std;
vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int N, long long int K)
{
    int i = 0;
    int j = 0;
    vector<long long> ans;
    queue<long long> q;
    while (j < N)
    {
        if (A[j] < 0)
            q.push(A[j]);
        if (j - i + 1 < K)
            j++;
        else
        {
            if (q.empty())
                ans.push_back(0);
            else
            {
                ans.push_back(q.front());
                if (q.front() == A[i])
                    q.pop();
            }
            i++;
            j++;
        }
    }
    return ans;
}
int main()
{
}