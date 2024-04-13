#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &strs)
{
    string smallest = "";
    int n = strs.size();
    int mini = INT_MAX;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (strs[i].size() < mini)
        {
            mini = strs[i].size();
            smallest = strs[i];
        }
    }
    for (int i = 0; i < mini; i++)
    {
        int match = smallest[i];
        for (int j = 0; j < n; j++)
        {
            if ((strs[j][i] != match))
            {
                return ans;
            }
        }
        ans += match;
    }
    return ans;
}
int main()
{
}