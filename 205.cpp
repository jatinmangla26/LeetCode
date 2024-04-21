#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t)
{
    vector<int> sArray(256, -1);
    vector<int> tArray(256, -1);
    if (s.size() != t.size())
        return false;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (sArray[s[i]] != tArray[t[i]])
            return false;
        sArray[s[i]] = tArray[t[i]] = i;
    }
    return true;
}
int main()
{
}