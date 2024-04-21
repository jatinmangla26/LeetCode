#include <bits/stdc++.h>
using namespace std;
bool wordPattern(string pattern, string s)
{
    vector<string> sArray;
    int n = s.size();
    int i = 0;
    string temp = "";
    while (i < n)
    {
        if (s[i] == ' ')
        {
            sArray.push_back(temp);
            temp = "";
        }
        else
        {
            temp += s[i];
        }
    }
    if (pattern.size() != sArray.size())
        return false;
    map<char, string> mp;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(pattern[i]) != mp.end() and mp[pattern[i]] != sArray[i])
            return false;
        mp[pattern[i]] = sArray[i];
    }
    return true;
}
int main()
{
}