#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t)
{
    map<char, int> mp;
    if (s.size() != t.size())
        return false;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp.find(t[i]) == mp.end())
        {
            return false;
        }
        mp[t[i]]--;
        if (mp[t[i]] == 0)
            mp.erase(t[i]);
    }
    return mp.size()==0;
}
int main()
{
}