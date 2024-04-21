#include <bits/stdc++.h>
using namespace std;
bool canConstruct(string ransomNote, string magazine)
{
    map<char, int> mp;
    for (char s : magazine)
    {
        mp[s]++;
    }
    for (char ch : ransomNote)
    {
        if (mp.find(ch) != mp.end() and mp[ch] > 0)
            mp[ch]--;
        else
            return false;
    }
    return true;
}
int main()
{
}