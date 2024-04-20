#include <bits/stdc++.h>
using namespace std;
int totalFruit(vector<int> &s)
{
    int i = 0;
    int j = 0;
    int ans = -1;
    unordered_map<int, int> mp;
    while (j < s.size()) {
        mp[s[j]]++;
        while (mp.size() > 2) {
            mp[s[i]]--;
            if (mp[s[i]] == 0)
                mp.erase(s[i]);
            i++;
        }
        if (mp.size() == 2) {
            ans = max(ans, j - i + 1);
        }
        j++;
    }
    return ans;
}
int main()
{
}