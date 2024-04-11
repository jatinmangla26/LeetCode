#include <bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string s)
{
    int n = s.size();
    int j = n - 1;
    while (s[j] == ' ')
        j--;
    int i = j;
    while (i >= 0 and s[i] != ' ')
        i--;
    return j - i + 1;
}
int main()
{
}