#include <bits/stdc++.h>
using namespace std;
int strStr(string haystack, string needle)
{
    int m = haystack.size();
    int n = needle.size();
    for (int i = 0; i < m; i++)
    {
        if (haystack[i] == needle[0])
        {
            int x = i;
            int j = 0;
            for (j = 0; j < n and x < m; j++)
            {
                if (haystack[x] != needle[j])
                    break;
                x++;
            }
            if (j == n)
                return i;
        }
    }
    return -1;
}
int main()
{
}