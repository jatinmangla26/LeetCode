#include <bits/stdc++.h>
using namespace std;
string convert(string s, int numRows)
{
    vector<string> zigzag(numRows, "");
    string ans = "";
    int i = 0;
    while (i < s.size())
    {
        for (int index = 0; index < numRows && i < s.size(); index++)
        {
            zigzag[index] += s[i];
            i++;
        }
        for (int index = numRows - 2; index > 0 && i < s.size(); index--)
        {
            zigzag[index] += s[i];
            i++;
        }
    }
    for (string s : zigzag)
        ans += s;
    return ans;
}
int main()
{
}